#include "main.h"



ssize_t read_textfile(const char *filename, size_t letters)
{
  int fd;
  ssize_t r,w;
  char* buffer = malloc(sizeof(char)*letters)
  if (!filename)
    {
      return (0);
    }
	
  fd = open(filename,O_RDONLY);
  if (fd<0)
    {
      close(fd);
      return (0);
    }
  

  r = read(fd,buffer,letters);
  
  if (r<0)
    free(buffer);
    return (0);

  w = write(STDOUT_FILENO,buffer,r);
  if (r!=w)
    return (0);
  return (w)
    
}
