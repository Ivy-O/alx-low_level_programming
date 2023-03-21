#include <stdio.h>
/**
* main - A program that print the size of various computer types
* Return: 0 (success)
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

Print(“size of a char % lu byte(s)\n”, (unsigned long)sizeof(a));
Print(“size of an int % lu byte(s)\n”, (unsigned long)sizeof(b));
Print(“size of a long int % lu byte(s)\n”, (unsigned long)sizeof(c));
Print(“size of a long long int % lu byte(s)\n”, (unsigned long)sizeof(d));
Print(“size of a float % lu byte(s)\n”, (unsigned long)sizeof(f));
return (0);
}
