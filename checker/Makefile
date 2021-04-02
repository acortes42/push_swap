# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/31 17:54:07 by acortes-          #+#    #+#              #
#    Updated: 2021/04/02 18:53:55 by acortes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

UTILS			= utils/ft_putstr.c utils/ft_split.c utils/ft_memset.c utils/ft_count_words.c \
					utils/ft_putnbr.c utils/ft_strlen.c utils/ft_calloc.c utils/ft_isinteger.c \
					utils/ft_sa.c utils/ft_sb.c utils/ft_ss.c utils/ft_pb.c utils/ft_ra.c \
					utils/ft_rb.c utils/ft_rr.c utils/ft_rra.c utils/ft_rrb.c utils/ft_rrr.c \
					utils/ft_pa.c utils/ft_lstswap.c

SRCS			= srcs/checker.c srcs/check_if_all_correct.c srcs/ft_work_with_list.c \
					srcs/ft_check_if_correct.c srcs/ft_check_if_repeted.c

CFLAGS			= -Wall -Wextra -Werror

OBJS			= ${SRCS:.c=.o}
OBJS2			= ${UTILS:.c=.o}

CC				= gcc

NAME			= checker

CFLAGS_DEBUG	= ${CFLAGS} -g

LIBFT = libft/libft.a

all: ${NAME}

$(NAME): ${OBJS} ${OBJS2}
	make -C libft all
	${CC} -o ${NAME} ${CFLAGS} ${LIBFT} ${OBJS} ${OBJS2}

clean:
	@rm -f  *.o
	@rm -f  srcs/*.o
	@rm -f  utils/*.o
	make -C libft clean

fclean: clean
	@rm -f *.o
	@rm -f  srcs/*.o
	@rm -f  utils/*.o
	@rm -f *.out
	@rm -f ${NAME}
	@rm -f *.a
	@rm -f a.out
	make -C libft clean

debug:	${OBJS}
	${CC} -o ${NAME} ${CFLAGS_DEBUG} ${OBJS}

re: fclean all
