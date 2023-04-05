#include "main.h"

/**
 * _strlen_recursion - Get the length of a string
 * @s:the string to get
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}

/**
 * check_palindrome - checks each character of a string
 * @s: the string to be checked
 * @n1: small iterator
 * @n2: big iterator
 * Return: .
 */
int check_palindrome(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + check_palindrome(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome
 * @s: string
 * Return: returns 1 if a string is a palindrome ,0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s) - 1));
}
