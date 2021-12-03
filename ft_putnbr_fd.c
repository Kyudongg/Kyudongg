#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
	 	if (n < 0)
			ft_putchar_fd('-', fd);
			//ft_putnbr_fd(-n, fd);
			//n = n * -1;;
		if (n >= 9)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}

/*
int	main(void)
{
	int	number;

	number = 1234;
	ft_putnbr_fd(number, 1);
}
*/