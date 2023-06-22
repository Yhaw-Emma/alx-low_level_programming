#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints the opcodes of its own code
* @argc: Number of command-line arguments
* @argv: Array of command-line arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int num_bytes, i;
	char *opcodes_array;

/* Check if the number of arguments is correct*/
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

/*Convert the second argument to an integer*/
	num_bytes = atoi(argv[1]);

/*Check if the number of bytes is valid*/
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

/*Assign the address of the main function to the opcodes_array pointer*/
	opcodes_array = (char *)main;

/*Iterate over the specified number of bytes*/
	for (i = 0; i < num_bytes; i++)
	{
/*Print each byte of the opcode in hexadecimal format*/
		if (i == num_bytes - 1)
		{
			printf("%02hhx\n", opcodes_array[i]);
			break;
		}
		printf("%02hhx ", opcodes_array[i]);
	}

	return (0);
}

