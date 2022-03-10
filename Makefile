# -*- Makefile -*-
CC = clang

CFLAGS = -Wall -Werror -Wextra -g

SOURCES = push_swap.c operation_utils.c push_swap_checks.c operations.c operations2.c operations3.c \
		sort_small_stack.c sort_big_stack.c sort_small_utils.c optimize_actions.c push_swap_utils.c

REG_OBJFILES = $(SOURCES:.c=.o)

NAME = push_swap

LIBFT = ./libft/libft.a

# -*- colors -*-
GREEN=\033[0;32m
RED=\033[0;31m
YELLOW=\033[1;33m
NO_COLOR=\033[0m

all: $(NAME) 
	@echo "${GREEN}Done making all files:)${NO_COLOR}"

$(LIBFT):
	$(MAKE) -C ./libft

$(NAME): $(REG_OBJFILES) $(LIBFT)
	$(CC) $(CFLAGS) $(REG_OBJFILES) $(LIBFT) -o $(NAME)
	  
clean: 
	make clean -C ./libft
	rm -f $(REG_OBJFILES)

fclean: clean
	rm -f $(LIBFT)
	rm -f $(NAME)
	@echo "${GREEN}Everything clean!${NO_COLOR}"

re: fclean all

.PHONY: all clean fclean re