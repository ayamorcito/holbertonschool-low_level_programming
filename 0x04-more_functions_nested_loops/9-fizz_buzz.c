#include <stdio.h>

/**
 * main - prints nums from 1-100. if /3=Fizz, if /5= Buzz, if /3&&/5= FIzzBuzz
 * Return: 0 allways (if succes), other if not
 */

int main(void)
{
	int num;

	for (num = 1 ; num <= 100 ; num++)
	{
		
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf(" ");
			printf("FizzBuzz");
		}	
		else if (num % 3 == 0)
		{
			printf(" ");
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf(" ");
			printf("Buzz");
		}
		else
		{
			printf(" ");
			printf("%d" , num);
		}
	}
	return (0);
}
