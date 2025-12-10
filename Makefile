# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mateon <mateon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/23 19:09:35 by matnusko          #+#    #+#              #
#    Updated: 2025/12/10 09:30:14 by mateon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

FLAG = -Wall -Wextra -Werror

PART1 = src/ft_atoi.c \
		src/ft_bzero.c \
		src/ft_calloc.c \
		src/ft_isalnum.c \
		src/ft_isalpha.c \
		src/ft_isascii.c \
		src/ft_isdigit.c \
		src/ft_isprint.c \
		src/ft_memchr.c \
		src/ft_memcmp.c \
		src/ft_memcpy.c \
		src/ft_memmove.c \
		src/ft_memset.c \
		src/ft_strchr.c \
		src/ft_strdup.c \
		src/ft_strlcat.c \
		src/ft_strlcpy.c \
		src/ft_strlen.c \
		src/ft_strncmp.c \
		src/ft_strnstr.c \
		src/ft_strrchr.c \
		src/ft_tolower.c \
		src/ft_toupper.c

PART2 = src/ft_substr.c \
		src/ft_strjoin.c \
		src/ft_strtrim.c \
		src/ft_split.c \
		src/ft_itoa.c \
		src/ft_strmapi.c \
		src/ft_striteri.c \
		src/ft_putchar_fd.c \
		src/ft_putstr_fd.c \
		src/ft_putendl_fd.c \
		src/ft_putnbr_fd.c

SRCS = ${PART1} ${PART2}

NAMELIB = libft.a

OBJ = ${SRCS:.c=.o}



## bonus part

BONUS = src/ft_lstnew.c \
		src/ft_lstadd_front.c \
		src/ft_lstsize.c \
		src/ft_lstlast.c \
		src/ft_lstadd_back.c \
		src/ft_lstdelone.c \
		src/ft_lstclear.c \
		src/ft_lstiter.c \
		src/ft_lstmap.c

BONUSOBJ = ${BONUS:.c=.o}

###


.c.o:
			${CC} ${FLAG} -c $< -o $@
			
all:		${NAMELIB}

${NAMELIB}:		${OBJ}
	ar rcs ${NAMELIB} ${OBJ}
	
bonus:		${OBJ} ${BONUSOBJ}
	ar rcs ${NAMELIB} ${OBJ} ${BONUSOBJ}
	
clean:
	rm -f ${OBJ} ${BONUSOBJ}
	
fclean: clean
	rm -f ${NAMELIB}
	
re:	fclean all
	
.PHONY:		all clear fclean re bonus 