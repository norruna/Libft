#include "libft.h"

char *ft_strrchr(char *str,char c)
{
	int	i;
	int	count;
	int	index;
	
	index = 0;
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		
		if (str[i] == c)
		{
			count++;
			index = i;		
		}
		i++;
	}
	if (count == 0)
		return (0);	
	return (&str[index]);
}
