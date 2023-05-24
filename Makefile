# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttinnerh <ttinnerh@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/10 18:35:57 by ttinnerh          #+#    #+#              #
#    Updated: 2023/05/24 01:54:37 by ttinnerh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
FILES := ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
			ft_islower.c ft_isprint.c ft_isspace.c ft_isupper.c \
			ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
			ft_strchr.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
			ft_strrchr.c ft_tolower.c ft_toupper.c ft_strlcat.c ft_memset.c \
			ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
			ft_calloc.c ft_striteri.c ft_strdup.c ft_substr.c ft_strmapi.c \
			ft_strjoin.c ft_strtrim.c ft_itoa.c ft_split.c
BONUSFILES := 
OBJS := $(FILES:%.c=%.o)
BONUSOBJS := $(BONUSFILES:%.c=%.o)
HEADER = libft.h
CFLAGS = -Wall -Werror -Wextra
ARFLAGS = rcs

.PHONY: all bonus clean fclean re

$(NAME): $(OBJS) $(HEADER)
		$(AR) $(ARFLAGS) $(NAME) $(OBJS)

all: $(NAME) bonus

bonus: $(BONUSOBJS) $(HEADER)
		$(AR) $(ARFLAGS) $(NAME) $(BONUSOBJS)

clean:	
		@echo "Removing object files"
		$(RM) $(OBJS)
		$(RM) $(BONUSOBJS)

fclean: clean
		@echo "Removing the library"
		$(RM) $(NAME)

re: fclean all
	@echo "Removing and recreating everything"
