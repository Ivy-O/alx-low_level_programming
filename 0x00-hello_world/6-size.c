#include <stdio.h>
/**
* main - A program that print the size of various computeir types
* Return: 0 (success)
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
Printf(“size of a char % lu byte(s)\n”, (unsigned long)sizeof(a));
Printf(“size of an int % lu byte(s)\n”, (unsigned long)sizeof(b));
Printf(“size of a long int % lu byte(s)\n”, (unsigned long)sizeof(c));
Printf(“size of a long long int % lu byte(s)\n”, (unsigned long)sizeof(d));
Printf(“size of a float % lu byte(s)\n”, (unsigned long)sizeof(f));
return (0);
}
