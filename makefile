# Name of the executable
NAME = libft

# Compiler and compiler flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Source files and object files
SRC = main.c ft_strlen.c ft_strncmp.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_toupper.c ft_tolower.c ft_isascii.c ft_isprint.c ft_atoi.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c ft_memset.c
OBJ = $(SRC:.c=.o)

# Default target
all: $(NAME)

# Rule to build the executable
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Rule to compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean all generated files
clean:
	rm -f $(OBJ)

# Clean everything and the executable
fclean: clean
	rm -f $(NAME)

# Rebuild the project from scratch
re: fclean all

.PHONY: all clean fclean re

