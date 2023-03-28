#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * main - Entry point for the program.
 *
 * Return: 0 on success.
 */
int main(void)
{
	srand(time(NULL)); /* Seed the random number generator with the current time. */

	const char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	const int num_valid_chars = sizeof(valid_chars) - 1;

	char password[PASSWORD_LENGTH + 1] = {0};

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = valid_chars[rand() % num_valid_chars];
	}

	printf("%s\n", password);

	return 0;
}

