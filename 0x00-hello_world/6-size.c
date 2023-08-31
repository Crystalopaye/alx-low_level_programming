#include <stdio.h>
/**
*main-prints the string in the printf function
*variable types are char, int, long, long long and float
*%zu is a place holder for the variable names
*Return: 0
*/
int main(void)
{
size_t charSize = sizeof(char);
printf("Size of a char: %zu byte(s)\n", charSize);
size_t intSize = sizeof(int);
printf("Size of an int: %zu byte(s)\n", intSize);
size_t longSize = sizeof(long);
printf("Size of a long int: %zu byte(s)\n", longSize);
size_t long_longSize = sizeof(long long);
printf("Size of a long long int: %zu byte(s)\n", long_longSize);
size_t floatSize = sizeof(float);
printf("Size of a float: %zu byte(s)\n", floatSize);
return (0);
}
