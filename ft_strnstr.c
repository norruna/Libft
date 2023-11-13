#include "libft.h"

char *ft_strnstr(char *str,char *c, int n)
{
	int	i;
	int	j;
	int	signal;
	int	count;
	int	index;
	
	index = 0;
	count = 0;
	i = 0;
	while (str[i] != '\0' && count < n)
	{
		if (str[i] == c[0])
		{
			index = i;
			j = 0;
			signal = 0;
			while (c[j] != '\0' && signal == 0)
			{
				if (c[j] != str[i])
					signal = 1;
				j++;
				i++;
			}
		}
	count ++;
	i++;
	}
	if (signal == 0)
		return (&str[index]);
	return (0);
 }
