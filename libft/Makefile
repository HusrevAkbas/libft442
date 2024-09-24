# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: huakbas <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/13 16:30:17 by huakbas           #+#    #+#              #
#    Updated: 2024/09/13 16:30:20 by huakbas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS := -Wall -Wextra -Werror
SRCFILES := ft_isalnum.c ft_isprint.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strlcat.c ft_strncmp.c ft_substr.c \
ft_atoi.c ft_isalpha.c ft_itoa.c ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_tolower.c \
ft_bzero.c ft_isascii.c ft_memchr.c ft_memset.c ft_putstr_fd.c ft_striteri.c ft_strlen.c ft_strrchr.c ft_toupper.c \
ft_calloc.c ft_isdigit.c ft_memcmp.c ft_putchar_fd.c ft_split.c ft_strjoin.c ft_strmapi.c ft_strtrim.c
BONUSFILES := ft_lstadd_back_bonus.c ft_lstdelete_bonus.c ft_lstlast_bonus.c ft_lstsize_bonus.c ft_lstadd_front_bonus.c \
ft_lstdelone_bonus.c ft_lstmap_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstnew_bonus.c
OBJECTFILES := $(SRCFILES:.c=.o)
BONUSOBJECTFILES := $(BONUSFILES:.c=.o)
NAME := libft.a
#BONUSFILES := $(wildcard *bonus.c)
#SRCFILES := $(wildcard ft*.c)

all: ${NAME}

${NAME}: ${OBJECTFILES}
	ar rcs $@ ${OBJECTFILES}

${OBJECTFILES}: ${SRCFILES}
	cc -c $(CFLAGS) ${SRCFILES}

${BONUSOBJECTFILES}: ${BONUSFILES}
	cc -c $(CFLAGS) ${BONUSFILES}

bonus: ${NAME} ${BONUSOBJECTFILES}
	ar rs ${NAME} ${BONUSOBJECTFILES}

#%.o : %.c
#	cc -c $(CFLAGS) $< -o $@

#libft: $(SRCFILES) clean
#	cc $(CFLAGS) -c $(SRCFILES) -o %.o

val:
	valgrind -s --leak-check=full --show-leak-kinds=all cc -c ${CFLAGS} ${SRCFILES} ${Bo}
	${MAKE} clean

clean:
	rm *.o

fclean:
	rm -f $(NAME)
	
re: fclean all

show:
	ar -tv ${NAME}

.PHONY: all clean fclean re show
