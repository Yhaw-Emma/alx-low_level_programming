#include "main.h"
#include <stdlib.h>

/**
 * wordCount - Counts the number of words in a string
 * @str: The input string
 *
 * Return: The number of words in the string
 */
int word_Count(char *str)
{
	int count = 0;
	int inWord = 0;

	while (*str)
	{
		/*Check for whitespace characters to detect word boundaries*/
		if (*str == ' ' || *str == '\t' || *str == '\n')
			inWord = 0;
		else if (inWord == 0)
		{
			/*Increment count when a new word is encountered*/
			inWord = 1;
			count++;
		}
		str++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The input string to split
 *
 * Return: Pointer to an array of strings (Success), NULL (Error)
 */
char **strtow(char *str)
{
	int len = 0;
	char **matrix, *word;
	int wordCount, i, j, k, m;

	/* Calculate the length of the input string*/
	while (str[len])
		len++;

	/* Count the number of words in the string*/
	wordCount = word_Count(str);

	/* Allocate memory for the array of strings*/
	matrix = (char **)malloc(sizeof(char *) * (wordCount + 1));
	if (matrix == NULL)
		return (NULL);

	i = 0;
	k = 0;

	while (i < len)
	{
		/* Skip leading whitespace characters*/
		while (i < len && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;

		j = i;

		/* Find the end index of the current word*/
		while (i < len && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;

		if (i > j)
		{
			/* Allocate memory for the word*/
			word = (char *)malloc(sizeof(char) * (i - j + 1));
			if (word == NULL)
				return (NULL);

			/* Copy the characters of the word*/
			for (m = 0; m < (i - j); m++)
				word[m] = str[j + m];

			/* Add null terminator to the word*/
			word[i - j] = '\0';

			/* Store the word in the array of strings*/
			matrix[k++] = word;
		}
	}

	/*Add the terminating null pointer*/
	matrix[k] = NULL;

	return (matrix);
}

