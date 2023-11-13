#ifndef LIBFT_H 
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int	ft_strlen(const char *str);
int	ft_strncmp(const char *str1,const char *str2,int n);
int	ft_isalpha(char c);
int	ft_isdigit(char c);
int	ft_isalnum (char c);
int	ft_toupper(char c);
int	ft_tolower(char c);
int	ft_isascii(char c);
int	ft_isprint(char c);
int	ft_atoi(const char *str);
char	*ft_strchr(char *s, char c);
char	*ft_strrchr(char *s, char c);
char	*ft_strnstr(char *haystack,char *needle, int n);
int	ft_strlcpy(char *dst, const char *src, int size);
int	ft_strlcat(char *dst, const char *src, int size);
void 	*ft_memset(void *s, int c, int n);
#endif
