*/all: ${NAME}

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCDIR = srcs
INCDIR = includes
RM = rm -f
AR = ar rcs

SRCS = ${addprefix ${SRCDIR}/, ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c}

OBJS = ${SRCS:.c=.o}

all: ${NAME}

.c.o:
	${CC} ${CFLAGS} -I ${INCDIR} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
${AR} ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
