#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* *str_concat - Entry point
*
* Return: Always 0.
* @size: size of array
* @c: charrr
*/
char *str_concat(char *s1, char *s2)
{
        unsigned int i = 0;
        unsigned int o = 0;
        unsigned int len = 0;
        unsigned int p = 0;
	char *s3;

        if (s1 == NULL)
                s1 = "";
        if (s2 == NULL)
                s2 = "";
	while (s1[i] != '\0')
	{
		i++;
		len++;
	}
	i = 0;
        while (s2[i] != '\0')
	{
  		i++;
  		len++;
	}
        s3 = malloc((len + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);

	while (s1[o] != '\0')
	{
		s3[o] = s1[o];
		o++;
	}
        while (s2[p] != '\0')
	{
		s3[o] = s2[p];
		p++;
		o++;
	}
        if (s2[p] == '\0')
                s3[o] = '\0';
        return (0);
}
