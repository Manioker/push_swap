# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: andi <andi@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 14:17:17 by andi              #+#    #+#              #
#    Updated: 2023/11/01 16:06:25 by andi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
      ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
      ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
      ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
      ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
      ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
      ft_substr.c ft_tolower.c ft_toupper.c ft_strtrim.c

BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
            ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

CFLAGS += -Wall -Werror -Wextra

OBJ = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS_SRC:.c=.o)

NAME = libft.a

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

bonus: $(BONUS_OBJ) $(OBJ)
	ar -rcs $(NAME) $(BONUS_OBJ) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: $(NAME)
	./$(NAME)

.PHONY: all bonus clean fclean re


