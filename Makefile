# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anvacca <anvacca@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/29 14:34:28 by anvacca           #+#    #+#              #
#    Updated: 2024/07/18 14:08:13 by anvacca          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXE = push_swap

SRC = 			main.c

SRC_LIST = 		./lists/init_list.c \
				./lists/init_index.c \
				./lists/movements/sa.c \
				./lists/movements/sb.c \
				./lists/movements/ss.c \
				./lists/movements/pa.c \
				./lists/movements/pb.c \
				./lists/movements/ra.c \
				./lists/movements/rb.c \
				./lists/movements/rr.c \
				./lists/movements/rra.c \
				./lists/movements/rrb.c \
				./lists/movements/rrr.c \

SRC_PARSING = 	./parsing/error_message.c \
				./parsing/isduplicate.c \
				./parsing/isnumber.c \
				./parsing/parser.c \

SRC_UTILS = 	./utils/ft_atoi.c \
				./utils/ft_lstnew.c \
				./utils/ft_lstsize.c \
				./utils/ft_lstlast.c \
				./utils/ft_lstbeforelast.c \
				./utils/ft_count_words.c \
				./utils/ft_split.c \
				./utils/ft_strcmp.c \
				./utils/ft_strlen.c \

SRC_SORTING = 	./sorting/issorted.c \
				./sorting/sorter.c \
				./sorting/radix.c \
				./sorting/simple_sort.c \

SOURCES = ${SRC} ${SRC_PARSING} ${SRC_UTILS} ${SRC_LIST} ${SRC_SORTING}

OBJ = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -fsanitize=address -Wall -Werror -Wextra -g
RM = rm -f

all:		${EXE}

${EXE}:		${OBJ}
		@${CC} ${CFLAGS} ${OBJ} -o ${EXE}
		@${RM} ${OBJ}

%.o:		%.c
		@${CC} ${CFLAGS} -c $? -o $@
		
clean:
		@${RM} ${OBJ}

fclean:		clean
		@${RM} ${EXE}

re: fclean all

run: $(EXE)
	./$(EXE)

.PHONY: all bonus clean fclean re
