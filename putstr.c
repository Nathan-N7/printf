#include "print.h"

int	ft_putstr(char *str)
{
	int	len;

	if (!str)
		return (0);
	len = ft_strlen(str);
	write (1, str, len);
	return (len);
}
