#include "ft_printf.h"

void	ft_printunsigned(unsigned int n, int *count)
{
	if (n == 0)
		ft_printnbr(0, count);
	else
	{
		if (n > 9)
		{
			ft_printunsigned(n / 10, count);
			ft_printunsigned(n % 10, count);
		}
		else if (n <= 9)
			ft_printnbr(n, count);
	}
}
