# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddemarco <ddemarco@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/03 13:21:43 by ddemarco          #+#    #+#              #
#    Updated: 2022/04/04 18:21:57 by ddemarco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

S_NAME = .simple

B_NAME = .bonus

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

RM = rm -f

SRCS = ft_atoi.c\
 ft_bzero.c\
 ft_calloc.c\
 ft_isalnum.c\
 ft_isalpha.c\
 ft_isascii.c\
 ft_isdigit.c\
 ft_toupper.c\
 ft_tolower.c\
 ft_isprint.c\
 ft_memchr.c\
 ft_memcmp.c\
 ft_memcpy.c\
 ft_memmove.c\
 ft_memset.c\
 ft_strchr.c\
 ft_strdup.c\
 ft_strncmp.c\
 ft_strnstr.c\
 ft_strrchr.c\
 ft_strlen.c\
 ft_strlcpy.c\
 ft_strlcat.c\
 ft_substr.c\
 ft_split.c\
 ft_strjoin.c\
 ft_strtrim.c\
 ft_itoa.c\
 ft_strmapi.c\
 ft_striteri.c\
 ft_putchar_fd.c\
 ft_putstr_fd.c\
 ft_putendl_fd.c\
 ft_putnbr_fd.c

INCLUDE = libft.h

SRCS_B = ft_lstnew.c\
 ft_lstadd_front.c\
 ft_lstsize.c\
 ft_lstlast.c\
 ft_lstadd_back.c\
 ft_lstdelone.c\
 ft_lstclear.c\
 ft_lstiter.c\
 ft_lstmap.c\

OBJS = ${SRCS:.c=.o}
OBJS_B = ${SRCS_B:.c=.o}

all: $(NAME)

$(NAME): $(S_NAME)

$(S_NAME): $(OBJS) $(INCLUDE)
	$(AR) $(NAME) $(OBJS) 
	rm -f ${B_NAME}
	touch ${S_NAME}


bonus: ${B_NAME}

${B_NAME}: $(OBJS_B) $(INCLUDE)
		$(AR) $(NAME) $(OBJS_B) 
		rm -f ${S_NAME}
		touch ${B_NAME}

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) ${NAME} ${B_NAME} ${S_NAME} $(OBJS) $(OBJS_B)

re: clean all bonus

.PHONY: bonus all clean fclean re