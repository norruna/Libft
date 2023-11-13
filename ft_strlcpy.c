#include "libft.h"

int	ft_strlcpy(char *dst, const char *src, int size)
{
	int	i;
	int	count;
	int	j;
	
	j = 0;
	i = 0;
	count = 0;
	count = ft_strlen(src);
	if (size <= 0)
	{
		return count;
	}
	while (src[i] != '\0' && j < size-1)
	{
		dst[i] = src[i];
		i++;
		j++;
	}
	dst[i] = '\0';
	return i-1;
	

}
