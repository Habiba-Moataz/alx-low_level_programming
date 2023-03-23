#include "main.h"
#include <stdio.h>
int _isupper(int c);{
 int d;
 if (c=>65&&c<=90)
        d=1;
 else
	d=0;
return d; 
}
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
