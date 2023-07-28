#include "main.h"
/**
 * binary_int - prints integers.
 * @n: takes in integers.
 * Return: length.
 */
int binary_int(int n)
{
	binary_num(n);
	return (count_num(n));
}
/**
 * binary_num - convert decimal number into binary numbers.
 * @n: takes in a integer.
 */
void binary_num(int n)
{
	int i = 0, b[32], j;

	while (n > 0)
	{
		b[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_printf("%d", b[j]);
}
