#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: Argument count/number.
 * @argv: Argument vector , array of pointers to the arguments.
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */

int main(int argc, char *argv[])
{
        int i = n1*n2;
	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

 

	printf("%d\n", i);

	return (0);
}
