# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/20 19:29:07 by jaeyjeon          #+#    #+#              #
#    Updated: 2021/12/21 17:11:42 by jaeyjeon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

CC			= gcc
RM			= rm -rf
CFLAGS		= -Wall -Wextra -Werror

SRCS		= ft_memset.c ft_memmove.c ft_memcpy.c ft_isprint.c ft_isdigit.c \
				ft_isascii.c ft_isalpha.c ft_isalnum.c ft_bzero.c ft_strlcat.c \
				ft_strlcpy.c ft_tolower.c ft_toupper.c ft_strchr.c \
				ft_strrchr.c ft_strlen.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
				ft_strncmp.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
				ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_striteri.c \
				ft_strmapi.c ft_putchar_fd.c ft_putchar_fd.c ft_putendl_fd.c \
				ft_putnbr_fd.c

SRCS_BONUS	=

OBJS		= $(SRCS:.c=.o)

OBJS_BONUS	= $(SRCS_BONUS:.c=.o)

all:		$(NAME)

bonus:		$(BONUS)

$(BONUS):		$(CC) $(CFLAGS) -c $(SRCS_BONUS) libft.h
				ar rcs $(BONUS) $(OBJS_BONUS)

$(NAME):
				$(CC) $(CFLAGS) -c $(SRCS) libft.h
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
				$(RM) $(NAME)
				$(RM) libft.h.gch

re:			fclean $(NAME)

.PHONY:		all clean fclean re bonus
