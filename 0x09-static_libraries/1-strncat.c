#include "main.h"
/**
*_strncat - function that concatenates two strings. it will use
* at most n bytes from src.
*@dest: pointer to destination string.
*@src: pointer to source string.
*@n: number of bytes to be concatenated.
*
*Return: pointer to destination string.
*/
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen++;
	for (i = 0 ; src[i] != '\0' ; i++)
		srclen++;
	for (i = 0 ; i < n ; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
