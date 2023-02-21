#include <stdio.h>
#include <ctype.h>

int main() {
  char c;
  if (islower(c)) {
    printf("The character '%c' is a lowercase alphabet.\n", c);
    return (1);
  } else {
    printf("The character '%c' is not a lowercase alphabet.\n", c);
    return (0);
  }
  
}
