/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myahiaou <myahiaou@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:28:51 by myahiaou          #+#    #+#             */
/*   Updated: 2023/11/13 12:28:55 by myahiaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	*ft_memset(void *s, int c, int n)
{
	char * str = (char *) malloc(sizeof(char));
	
	
	int	j = 0;
	while (str[j] != &s)
	{
		j++;
	}
	while (n > 0 || str[j] != '\0')
	{
		str[j] = c;
		j++;
		n--;		
	}
	free(str);
}
