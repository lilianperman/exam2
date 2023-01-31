#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int num = nbr;
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

int main (void)
{
	printf("%s\n", ft_itoa(-2147483647));
	return (0);
}
