#include "libft.h"

int ft_isascii(char c) {
    if ((unsigned char)c <= 127) {
        return (1);
    }
    return (0);
}
