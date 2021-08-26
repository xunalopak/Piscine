# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchampli <rchampli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 18:50:28 by rchampli          #+#    #+#              #
#    Updated: 2021/08/25 21:41:13 by rchampli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
			srcs/ft_strlen.c srcs/ft_swap.c

OBJS	= ${SRCS:.c=.o}

HEAD	= ./includes/

NAME	= libft.a

AR		= ar rc

LIB		= ranlib

CC		= gcc

RM		= rm -fr

CFLAGS	= -Werror -Wall -Wextra

all:	${NAME}

.c.o:
		${CC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		${AR} ${NAME} ${OBJS}
		${LIB} ${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}
		
re:     fclean all

.PHONY: all clean fclean re