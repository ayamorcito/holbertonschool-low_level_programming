#include <time.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 w/o using printf
 * Return: Always 0 (Success)
 */
int main(void)
{
	 char ch = '0';
  
        for (ch = '0'; ch <= '9'; ch++)
        putchar(ch);
  
    return (0);
}
