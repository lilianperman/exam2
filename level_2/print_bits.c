#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 8;
	char	result;

	while (i > 0)
	{
		result = (octet >> i & 1) + '0';
		write(1, &result, 1);
		i--;
	}
}

/*
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010"*/
