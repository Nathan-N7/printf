#include "print.h"

int     putnbr_u(unsigned int nbr)
{
	char	*str;
	int	len;

	str = ft_utoa(nbr);
	len = ft_putstr(str);
	return (len);
}
