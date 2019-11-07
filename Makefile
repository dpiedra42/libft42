# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpiedra <dpiedra@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/07 14:03:22 by dpiedra           #+#    #+#              #
#    Updated: 2019/11/07 15:50:56 by dpiedra          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
RM		=	rm -f
CFLAGS	= 	-Wall -Wextra -Werror
CC		=	gcc
HEADER	=	./inlcudes
HEAD	=	$(HEADER) ft.h
SRCS	=	ft.atoi.c		ft_bzero.c		ft_calloc.c		ft_isalnum.c\
		 	ft_isalpha.c	ft_isascii.c	ft_isdigit.c	ft_isprint.c\
			ft_memccpy.c	ft_memchr.c		ft_memcmp.c		ft_memcpy.c\
			ft_memmove.c	ft_memset.c		ft_strchr.c		ft_strdup.c\
			ft_strlcat.c	ft_strlcpy.c	ft_strlen.c		ft_strncmp.c\
			ft_strnstr.c	ft_strrchr.c	ft_tolower.c	ft_toupper.c
OBJ		=	$(SRCS:.c=.o)

all		:	$(NAME)
.c.o	:	$(CC) $(CFLAGS) $(HEADER) -c $< -o $(<:.c=.o)
$(NAME)	:	$(OBJ)
			$(CC) $(CFLAGS) $(HEADER) -o $(NAME) $(OBJ)
clean	:
			$(RM) $(OBJ)
fclean	:	clean
			$(RM) $(NAME)
re		:	fclean all