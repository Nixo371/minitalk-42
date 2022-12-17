SRCS = server.c client.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_strlen.c ft_atoi.c
OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: server client

server: server.o ft_putchar_fd.o ft_putstr_fd.o ft_putnbr_fd.o ft_strlen.o
	$(CC) -o $@ $?

client: client.o ft_strlen.o ft_atoi.o
	$(CC) -o $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJS)
	
fclean: clean
	rm -f server client

re: fclean all

.PHONY: all clean fclean re