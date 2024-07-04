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
        unsigned int i;
        unsigned int o = 0;
        unsigned int p;
        unsigned int len;
        char *s3;

        if (s1 == NULL)
                s1 = "";

        if (s2 == NULL)
                s2 = "";

        for (i = 0; *s1 != '\0'; i++)
                len++;

        for (i = 0; *s2 != '\0'; i++)
                len++;

        s3 = malloc((len + 1) * sizeof(char));

        for (p = 0; *s1 != '\0'; p++)
        {
                s3[p] = s1[o];
                o++;
        }
            
        for (o = 0; *s2 != '\0'; o++)
        {
                s3[p] = s2[o];
                p++;
        }
        if (*s2 == '\0')
                s3[p] = '\0';
        return (0);
}
