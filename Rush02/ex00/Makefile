# ---Variables---
NAME	= rush02
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

# ---Fichier sources---
SRCS	= main.c new_struct.c function.c 

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) - o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean
