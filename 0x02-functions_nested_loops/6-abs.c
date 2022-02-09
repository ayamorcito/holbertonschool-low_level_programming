#include "main.h"

/**
 *_abs - computes the absolute value of an integer
 * Return: 0
 * @abs: num
 **/

int _abs(int abs)
{
	abs = abs;

	if (abs < 0)
	{
		abs = -abs;
	}
	else
	{
		abs = abs;
	}
	return (abs);
}
