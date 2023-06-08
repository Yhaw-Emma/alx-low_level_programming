#include "main.h"

/**
 * wildcmp - Compare two strings with wildcard pattern matching
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 1 if the strings match, 0 otherwise
 */


int wildcmp(char *s1, char *s2)
{

	/* Check if both strings have reached the end */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* Check if current characters match or if s2 is a wildcard */
	if (*s1 == *s2 || *s2 == '*')
		return (wildcmp(s1 + 1 , s2 + 1));

	/* Check if s2 is a wildcard and skip a character in s1 */
	if (*s2 == '*')
		if (wildcmp(s1 , s2 + 1))
			return (1);

	/* Check if s1 still has characters and skip a character in s2 */
	if (*s1 != '\0' && wildcmp(s1 + 1, s2))
		return (1);

	return (0);
}
