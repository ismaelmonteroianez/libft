# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ismonter <ismonter@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/19 11:38:10 by ismonter          #+#    #+#              #
#    Updated: 2026/01/19 15:29:45 by ismonter         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
# SOURCE = ft_memcpy.c ft_strdup.c
SOURCE = $(wildcard *.c)
OBJS = $(SOURCE:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
	
