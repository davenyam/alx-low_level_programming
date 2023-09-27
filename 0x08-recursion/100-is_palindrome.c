#include "main.h"

/**
 * str_len - calculates the length of a string recursively
 *
 * @s: the input string
 *
 * Return: the length of the string
 */
int str_len(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += str_len(s + len);
	}

	return (len);
}

/**
 * isPalindrome - checks if a string is a palindrome recursively
 *
 * @s: the input string
 * @len: the length of the string
 * @index: the current index being checked
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int isPalindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (isPalindrome(s, len, index + 1));

	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: the string to be checked
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = str_len(s);

	if (!(*s))
		return (1);

	return (isPalindrome(s, len, index));
}
