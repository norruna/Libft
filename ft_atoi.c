#include "libft.h"

int	ft_atoi(const char *str)
{	
	int	i;
	int	number ;	
	int	sign = 1;
	i = 0;
	number = 0;
	
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign = -sign;
		i++;
	}	
	while (str[i] >= 48 && str[i] <= 57)
	{
		number = (number*10) + (str[i] - '0');
		i++;
	}
	if (sign == -1)
		number = -number;
	return (number);
}
