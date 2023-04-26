# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rel-fila <rel-fila@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/15 22:46:37 by rel-fila          #+#    #+#              #
#    Updated: 2023/04/15 22:46:38 by rel-fila         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
BONUS_NAME = checker.a
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRC = big_sort.c check_input.c check_sorted.c fill_stack.c ft_atoi.c ft_lst_add_back.c ft_lstlast.c ft_lstnew.c ft_lstsize.c ft_split.c \
	ft_strlen.c index_stack.c push_swap.c push.c reverse_rotate.c rotate.c sort_stack.c swap.c utils.c ft_lstclear.c utils2.c
SRC_BNS = checker_bonus.c big_sort.c check_input.c check_sorted.c fill_stack.c ft_atoi.c ft_lst_add_back.c ft_lstlast.c ft_lstnew.c ft_lstsize.c ft_split.c utils2.c \
	ft_strlen.c index_stack.c push.c reverse_rotate.c rotate.c sort_stack.c swap.c utils.c ft_lstclear.c get_next_line/get_next_line.c get_next_line/get_next_line_utils.c \
	utils2.c


OBJ = ${SRC:.c=.o}
BONUS_OBJ = ${SRC_BNS:.c=.o}

all : $(NAME)

$(NAME) : $(OBJ) push_swap.h
	@ar rc $(NAME) $(OBJ)
	@${CC} ${CFLAGS} push_swap.c ${NAME} -o push_swap

bonus : ${BONUS_NAME}

${BONUS_NAME} : ${BONUS_OBJ} push_swap.h get_next_line/get_next_line.h
	@ar rc ${BONUS_NAME} ${BONUS_OBJ}
	@${CC} ${CFLAGS} checker_bonus.c ${BONUS_NAME} -o checker
clean :
	@${RM} ${OBJ} ${NAME}
	@${RM} ${BONUS_OBJ} ${BONUS_NAME}
fclean : clean
	@${RM} push_swap checker
re : fclean all
