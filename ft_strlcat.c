#include "libft.h"

int ft_strlcat(char *dst, const char *src, int size)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (j < size)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst));
}
