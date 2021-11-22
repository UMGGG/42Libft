# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/20 19:29:07 by jaeyjeon          #+#    #+#              #
#    Updated: 2021/11/22 17:18:23 by jaeyjeon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

CC			= gcc
RM			= rm -rf
CFLAGS		= -Wall -Wextra -Werror

SRCS		= ft_memset.c ft_memmove.c ft_memcpy.c ft_isprint.c ft_isdigit.c \
				ft_isascii.c ft_isalpha.c ft_isalnum.c ft_bzero.c ft_strlcat.c \
				ft_strlcpy.c ft_tolower.c ft_toupper.c ft_strchr.c \
				ft_strrchr.c ft_strlen.c

OBJS		= $(SRCS:.c=.o)

all:		$(NAME)

$(NAME):
				$(CC) $(CFLAGS) -c $(SRCS) libft.h
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)
	
fclean:		clean
				$(RM) $(NAME)
				$(RM) libft.h.gch
				
re:			fclean $(NAME)

.PHONY:		all clean fclean re