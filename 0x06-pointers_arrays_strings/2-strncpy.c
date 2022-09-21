#include "main.h"
/**
*_strncpy - C function that copies strings, including the
*terminating null byte, using inputs of bytes tes 
*if the length of the source string is less than the maximum bytes number,
*the remainder of the destination string is filled with null bytes
*works identically to the standard library function 'strncpy'
*@dest:buffer storing the string copy
*@src:the source string
*@n:max number of byte copied
*Return: returns
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
