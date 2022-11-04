# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moudrib <moudrib@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 16:21:43 by moudrib           #+#    #+#              #
#    Updated: 2022/11/02 22:39:06 by moudrib          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = cc
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
    ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memcmp.c \
    ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strdup.c ft_calloc.c\
    ft_strrchr.c ft_strncmp.c ft_memchr.c ft_strnstr.c ft_substr.c ft_atoi.c\
	ft_strjoin.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c \
	ft_putendl_fd.c ft_strmapi.c ft_split.c ft_itoa.c ft_strtrim.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o : %.c  libft.h
	$(CC) $(CFLAGS) -c $< 

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all










































# NAME = libft.a
# SOURCES = \
#     ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
#     ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memcmp.c \
#     ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strdup.c ft_calloc.c\
#     ft_strrchr.c ft_strncmp.c ft_memchr.c ft_strnstr.c ft_substr.c ft_atoi.c\
# 	ft_strjoin.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c \
# 	ft_putendl_fd.c ft_strmapi.c ft_split.c ft_itoa.c ft_strtrim.c

# OBJECTS = $(SOURCES:.c=.o)
# BOBJECTS = $(BSOURCES:.c=.o)

# CC = gcc
# CFLAGS = -Wall -Wextra -Werror

# all: $(NAME)

# $(NAME): $(OBJECTS)
# 	$(AR) -r $@ $?

# bonus: $(OBJECTS) $(BOBJECTS)
# 	$(AR) -r $(NAME) $?

# %.o: %.c
# 	$(CC) -c $(CFLAGS) $?

# clean:
# 	rm -f $(OBJECTS) $(BOBJECTS)

# fclean: clean
# 	rm -f $(NAME)

# re: fclean all

# .PHONY: all bonus clean fclean re