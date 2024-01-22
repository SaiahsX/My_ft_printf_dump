#include <stdio.h>
#include <limits.h>

int	ft_printf(const char *str, ...);

int	main(void)
{
	ft_printf("Hello %s\n", NULL);
	return (0);
}