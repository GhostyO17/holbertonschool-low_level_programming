#include "main.h"

/**
 * _isalpha - searches for alphabetic characters
 * @c: character to read
 * Return: 1 if alpha character detected
 */


int _isalpha(int c)
{
	int ch, CH, any;

	any = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
		{
			any = 1;
		}
	}

	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		if (c == CH)
		{
			any = 1;
		}
	}

	return (any);
}
