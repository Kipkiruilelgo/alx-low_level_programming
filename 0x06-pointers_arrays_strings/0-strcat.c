#include "main.h"

/**
*_strcat - concatinate the string ponte to by @src to
*the end of the string pointed to by @dest
*@dest: strng that will be appended
*@src: string to be concatinated upon
*
*Return: returns pointer to @dest
*/

char*_strcat(char*dest, char*src)
{
int index = 0, dest_len = 0;
while(dest[index++])
dest_len++;
for(index=0, src[index]; index++)
dest[dest_len++] = src[inex];

return(dest);
}
