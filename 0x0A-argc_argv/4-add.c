#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function
 *
 * @argc: argumenent count
 *
 * @argv: arrays of passed arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (x = 1; x < argc; x++)
		{
			for y = 0; argv[x][y] != '\0'; j++)
			{
				if (!isdigit(argv[x][y]))
				{
					printf("Error\n");
					return (1);

				}
			}


			sum += atoi(argv[x]);
		}

		printf("%d\n", sum);
	}

	return (0);
}
