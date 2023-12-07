# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddemarco <ddemarco@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/30 13:44:28 by ddemarco          #+#    #+#              #
#    Updated: 2022/05/15 16:26:23 by ddemarco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = ./libft/libft.a

CC = gcc

FLAGS = -c -Wall -Wextra -Werror

INCLUDES = include/ft_printf.h libft/libft.h

SRCS = 		src/ft_printf.c \
			src/ft_flag_utils.c \
			src/ft_hex_tools.c \
			src/ft_hex_utils.c  \
			src/ft_int_utils.c  \
			src/ft_uint_utils.c  \
			src/ft_math_utils.c \
			src/ft_ptr_tools.c \
			src/ft_read_format.c \
			src/ft_struct_utils.c \
			src/ft_utils.c \
			src/ft_write_format.c \
			libft/ft_atoi.c\
			libft/ft_bzero.c\
			libft/ft_calloc.c\
			libft/ft_isalnum.c\
			libft/ft_isalpha.c\
			libft/ft_isascii.c\
			libft/ft_isdigit.c\
			libft/ft_toupper.c\
			libft/ft_tolower.c\
			libft/ft_isprint.c\
			libft/ft_memchr.c\
			libft/ft_memcmp.c\
			libft/ft_memcpy.c\
			libft/ft_memmove.c\
			libft/ft_memset.c\
			libft/ft_strchr.c\
			libft/ft_strdup.c\
			libft/ft_strncmp.c\
			libft/ft_strnstr.c\
			libft/ft_strrchr.c\
			libft/ft_strlen.c\
			libft/ft_strlcpy.c\
			libft/ft_strlcat.c\
			libft/ft_substr.c\
			libft/ft_split.c\
			libft/ft_strjoin.c\
			libft/ft_strtrim.c\
			libft/ft_itoa.c\
			libft/ft_strmapi.c\
			libft/ft_striteri.c\
			libft/ft_putchar_fd.c\
			libft/ft_putstr_fd.c\
			libft/ft_putendl_fd.c\
			libft/ft_putnbr_fd.c
		
OBJS = ${SRCS:.c=.o}

OBJS_R =	ft_printf.o \
			ft_flag_utils.o \
			ft_hex_utils.o \
			ft_int_utils.o  \
			ft_uint_utils.o  \
			ft_hex_tools.o \
			ft_math_utils.o \
			ft_ptr_tools.o \
			ft_read_format.o \
			ft_struct_utils.o \
			ft_utils.o \
			ft_write_format.o \
			ft_atoi.o\
			ft_bzero.o\
			ft_calloc.o\
			ft_isalnum.o\
			ft_isalpha.o\
			ft_isascii.o\
			ft_isdigit.o\
			ft_toupper.o\
			ft_tolower.o\
			ft_isprint.o\
			ft_memchr.o\
			ft_memcmp.o\
			ft_memcpy.o\
			ft_memmove.o\
			ft_memset.o\
			ft_strchr.o\
			ft_strdup.o\
			ft_strncmp.o\
			ft_strnstr.o\
			ft_strrchr.o\
			ft_strlen.o\
			ft_strlcpy.o\
			ft_strlcat.o\
			ft_substr.o\
			ft_split.o\
			ft_strjoin.o\
			ft_strtrim.o\
			ft_itoa.o\
			ft_strmapi.o\
			ft_striteri.o\
			ft_putchar_fd.o\
			ft_putstr_fd.o\
			ft_putendl_fd.o\
			ft_putnbr_fd.o

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(INCLUDES) $(SRCS)
		ar -rcs $(NAME) $(OBJS)

all : $(NAME)

bonus : $(NAME)

clean : 
		rm -rf $(OBJS)
		rm -rf $(OBJS_R)
fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all bonus clean fclean re