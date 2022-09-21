#include "main.h"
/**
*_strcat - concatenate two strings , add inputs and bytes
*@dest: string to be appended upon at the end of dest
*@src: string to be completed at the end of dest
*@n: integer parameter to compare index to
*Return: returns new added string
*/

char *_strcat(char *dest, char *src, int n)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0, src[index] && index < n; index++)
		dest[dest_len++] = src[index++];

	return (dest);

}
