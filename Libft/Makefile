# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alorenzo <alorenzo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/18 17:25:59 by alorenzo          #+#    #+#              #
#    Updated: 2023/04/25 17:21:54 by alorenzo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =  ft_isalpha.c\
ft_isdigit.c\
ft_isalnum.c\
ft_isascii.c\
ft_isprint.c\
ft_strlen.c\
ft_strlcpy.c\
ft_strlcat.c\
ft_tolower.c\
ft_toupper.c\
ft_strchr.c\
ft_strrchr.c\


OBJS = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

CC = gcc

all: $(NAME)

$(NAME) : $(OBJS)
	@ar rcs $(NAME) $(OBJS)

$(OBJS):$(FILES)
	@$(CC) $(FLAGS) -c $(SRC)

clean: 
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME) 

re: fclean all

.PHONY: clean fclean re all

