#include "libftprintf.h"
#include "stdio.h"

int main()
{
	int a = ft_printf("%%%c", 'x');
	printf("\n");
	int b = printf("%%%c", 'x');
	printf("\n");
	printf("%%%c", 'x');
	printf("\n");
	ft_printf("%i", a);
	printf("\n");
	ft_printf("%i", b);
	return 0;
}