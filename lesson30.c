#include <stdio.h>

void printd(int n)
{
	if (n < 0){
		putchar('-');
	}
	if (n / 10)
	{
		printd(n/10);
		putchar(n % 10 + '0');
	}
}