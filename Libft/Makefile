# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alorenzo <alorenzo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/18 17:25:59 by alorenzo          #+#    #+#              #
#    Updated: 2023/07/17 14:08:51 by alorenzo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =  ft_isalpha.c\
ft_isdigit.c\
ft_isalnum.c\
ft_isascii.c\
ft_isprint.c\
ft_strlen.c\
ft_memset.c\
ft_bzero.c\
ft_memcpy.c\
ft_memmove.c\
ft_strlcpy.c\
ft_strlcat.c\
ft_tolower.c\
ft_toupper.c\
ft_strchr.c\
ft_strrchr.c\
ft_strncmp.c\
ft_memchr.c\
ft_memcmp.c\
ft_strnstr.c\
ft_atoi.c\
ft_calloc.c\
ft_strdup.c\
ft_substr.c\
ft_strjoin.c\
ft_strtrim.c\
ft_split.c\
ft_itoa.c\
ft_strmapi.c\
ft_striteri.c\
ft_putchar_fd.c\
ft_putstr_fd.c\
ft_putendl_fd.c\
ft_putnbr_fd.c

BONUS = ft_lstnew_bonus.c\
ft_lstadd_front_bonus.c\
ft_lstsize_bonus.c\

OBJS = $(SRC:.c=.o)

BONUS_OBJS = $(BONUS:.c=.o)

FLAGS = -Wall -Wextra -Werror

CC = gcc

all: $(NAME)

$(NAME) : $(OBJS)
	@ar rcs $(NAME) $(OBJS)

$(OBJS) : $(SRC)
	@$(CC) $(FLAGS) -c $(SRC)
	@echo "Se ha compilado correctamente"

bonus: $(BONUS_OBJS)
	@$(CC) $(FLAGS) -c $(BONUS)
	@ar rcs $(NAME) $(BONUS_OBJS)
	@echo "Se ha compilado el bonus correctamente"

clean: 
	@rm -f $(OBJS)
	@echo "Se ha hecho clean correctamente"

fclean: clean
	@rm -f $(NAME) 
	@echo "Se ha hecho fclean correctamente"

re: fclean all

.PHONY: clean fclean re all bonus

