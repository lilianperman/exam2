#include <unistd.h>

void	write_num(int num)
{
	char	nbr;

	if (num > 10)
	{
		write_num(num/10);
		nbr = num % 10 + '0';
	}
	else
		nbr = num + '0';
	write(1, &nbr, 1);
}

int main (void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 != 0)
			write(1, "fizz\n", 5);
		else if (i % 5 == 0 && i % 3 != 0)
			write(1, "buzz\n", 5);
		else if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else
		{
			write_num(i);
			write(1, "\n", 1);
		}
		i++;
	}
	return (0);
}

/*
 Allowed functions: write

 Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

Example:

$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$>*/
