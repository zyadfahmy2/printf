#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * 
 * Return: always success -> 0
 */
int main(void)
{
	int len;
	int len2;
	char c;
	char *s;

	c = '#';
	s = "hello world";
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = _printf("Let's try to printf a simple sentence.\n");

	_printf("%c", c);
	_printf("%s", s);
	printf("len: %d len2: %d", len, len2);
	return (0);
}
