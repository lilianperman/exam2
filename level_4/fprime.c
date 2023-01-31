#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv)
{
	int i;
	int num;

	if (argc == 2)
	{
		num = atoi(argv[1]);
		if (num == 1)
		{
			printf("1\n");
			return (0);
		}
		i = 2;
		while (i <= num)
		{
			while (num % i == 0)
			{
				printf("%d", i);
				if (num == i)
					break;
				num = num / i;
				printf("*");
			}
			i++;
		}
	}
	printf("\n");
	return (0);
}
