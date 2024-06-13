#include <stdio.h>
/**
 *Description: main - size of stuff
 * Return: Always 0 (Success)
 */
int main(void)
{
   printf("Size of a char: %zu byte(s)\n", sizeof(char));
   printf("Size of int: %zu bytes\n", sizeof(int));
   printf("Size of longint: %zu bytes\n", sizeof(long int));
   printf("Size of longlongint: %zu bytes\n", sizeof(long long int));
   printf("Size of float: %zu byte\n", sizeof(float));
   
    return (0);
}
