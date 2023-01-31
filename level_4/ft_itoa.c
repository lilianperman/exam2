//#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	long int num = nbr;
	int len = 0;
	char	*result;

	if (nbr < 0)
	{
		len++;
		num = -nbr;
	}
	while (num)
	{
		num = num / 10;
		len++;
	}
	result = (char *)malloc(sizeof(char) * len + 1);
	if (!result)
		return NULL;
	result[len] = '\0';
	if (nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		result[--len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (result);
}

/*int main (void)
{
	printf("%s\n", ft_itoa(-2147483647));
	return (0);
}*/

/*
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);*/
