#include "libft.h"

int	main(void)
{
	char str1[] = "Hello how are you";
	char str2[] = "hello";
	char str3 = 'l';
	
	int  count = 0;
	
	/*1 ft_strlen test
	***************/
	count = ft_strlen(str1);
	printf("ft_strlen : %d\n",count);
	/*************/
	
	/*2 isascii test
	***************/
	count = ft_isascii(str3);
	printf("ft_isascii : %d\n",count);
	/*************/
	
	/*3 ft_strncmp test
	***************/
	count = ft_strncmp(str1,str2,2);
	printf("ft_strncmp : %d\n",count);
	/*************/
	
	/*4 ft_isalpha test
	****************/
	count = ft_isalpha(str3);
	printf("ft_isalpha : %d\n",count);
	/**************/
	
	/*5 ft_isdigit test
	****************/
	count = ft_isdigit(str3);
	printf("ft_isdigit : %d\n",count);
	/**************/
	
	/*6 ft_isalnum test
	****************/
	count = ft_isalnum(str3);
	printf("ft_isalnum : %d\n",count);
	/**************/
	
	/*7 ft_toupper test
	****************/
	printf("ft_toupper : %c\n",ft_toupper(str3));
	/**************/
	
	/*8 ft_tolower test
	****************/
	printf("ft_tolower : %c\n",ft_tolower(str3));
	/**************/
	
	/*9 ft_isprint test
	**************/
	count = ft_isprint(str3);
	printf("ft_isprint : %d\n",count);
	/************/
	
	/*10 ft_atoi test
	************/
	count = ft_atoi(str2); 
	printf("ft_atoi : %d\n",count);
	printf("atoi :  %d\n",atoi(str2));
	/**********/
	
	/*11 ft_strchr test
	******************/
	 printf("ft_strchr  : %s\n",ft_strchr(str1, str3));
	 printf("strchr : %s\n",strchr(str1,str3));
	/****************/
	
	/*12 ft_strrchr test
	****************/
	printf("ft_strrchr  : %s\n",ft_strrchr(str1, str3));
	printf("strrchr : %s\n",strrchr(str1,str3));
	/**************/
	
	/*13 ft_strnstr test
	***************/
	printf("ft_strnstr  : %s\n",ft_strnstr(str1, str2,3));
	/*************/
	
	/*14 ft_strlcpy test
	**************/
	count = ft_strlcpy(str1,str2,3);
	printf("ft_strlcpy : %d\n",count);
	/************/
	
	/*15 ft_strlcat test
	*************/
	count = ft_strlcat(str1,str2,3);
	printf("ft_strlcat : %d\n",count);
	/************/
	
	/*16 ft_memset test
	*************/
	ft_memset(str1,str2,3);
	printf("ft_memset : %d\n",count);
	memset(s,c, n);
	printf("memset : %d\n",count);
	/************/
		
	return (0);
}
