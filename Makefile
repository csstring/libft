# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schoe <schoe@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/20 17:04:36 by schoe             #+#    #+#              #
#    Updated: 2022/03/17 17:51:09 by schoe            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	   ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
	   ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
	   ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
	   ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
BSRCS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
		ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
OBJS = ${SRCS:.c=.o}
BOBJS = ${BSRCS:.c=.o}
RM = rm -f
INCLUDE = libft.h
NAME = libft.a

ifdef BONUS
	OBJ = ${OBJS} ${BOBJS}
else
	OBJ = ${OBJS}
endif

all : $(NAME)

$(NAME) : ${OBJ}
		ar -crs $(NAME) ${OBJ}

%.o : %.c ${INCLUDE}
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

bonus :
	make BONUS=1

clean :
		${RM} ${OBJS} ${BOBJS}

fclean : clean
		${RM} $(NAME)

re : fclean all

.PHONY: all clean fclean re bonus
