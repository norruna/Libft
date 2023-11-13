#include "libft.h"

int	ft_strncmp(const char *str1,const char *str2,int n)
{
	int	i;
	int	c;
	int	j;
	
	c = 0;
	i = 0;
	j = 0;
	while (j < n)
	{
		while (c == 0 && (str1[i] != '\0' || str2[i] != '\0'))
		{
				c = str1[i] - str2[i];
				i++;
		}
	j++;
	}
	return (c);

}
