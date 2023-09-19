#include <stdio.h>

/**
*rev_string - Reverses a string in place.
*@s: A pointer to the string to be reversed.
*
*Description: This function takes a pointer to a string - character array and reverses the characters of the string in place.
*/
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end = 0;
	char temp;

	while (s[length] != '\0')
	{
	length++;
	}
	/*Set the end index to the last character*/
	end = length - 1;

	while (start < end)
	{
	/*Swap s[start] and s[end]*/
	temp = s[start];
	s[start] = s[end];
	s[end] = temp;

	/*moves the indices towards the center*/
	start++;
	end--;
	}
}

