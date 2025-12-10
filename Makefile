# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matnusko <matnusko@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/23 19:09:35 by matnusko          #+#    #+#              #
#    Updated: 2025/09/06 22:52:08 by matnusko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

FLAG = -Wall -Wextra -Werror

PART1 = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
		ft_tolower.c ft_toupper.c ##ft_substr.c

PART2 = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c

SRCS = ${PART1} ${PART2}

NAMELIB = libft.a

OBJ = ${SRCS:.c=.o}



## bonus part

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		ft_lstmap.c

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