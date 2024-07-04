#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* create_array - Entry point
*
* Return: Always 0.
* @size: size of array
* @c: charrr
*/
char *str_concat(char *s1, char *s2)
{
        unsigned int i = 0;
        unsigned int o = 0;
        unsigned int p = 0;
        unsigned int len = 0;
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

	for (p = 0; s1[p] != '\0'; p++)
        {
                s3[p] = s1[o];
                o++;
        }
        for (o = 0; s2[o] != '\0'; o++)
        {
                s3[p] = s2[o];
                p++;
        }
        if (*s2 == '\0')
                s3[p] = '\0';
        return (0);
}
