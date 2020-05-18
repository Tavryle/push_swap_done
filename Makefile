NAME = push_swap.a

SRC = checker.c \
      exc_instruction_ch.c \
      exc_rr_ch.c \
      exc_rrr_ch.c \
      get_next_line.c \
      help_sort.c \
      insttructions.c \
      is_sort.c \
      least_moves_betweenA_B.c \
      more_instructions.c \
      more_instructions_more.c \
      push_swap.c \
      rot_find.c \
      sort.c \
      sort_large.c \
      stacks.c \
      check_if_dup.c

SRCO = checker.o \
      exc_instruction_ch.o \
      exc_rr_ch.o \
      exc_rrr_ch.o \
      get_next_line.o \
      help_sort.o \
      insttructions.o \
      is_sort.o \
      least_moves_betweenA_B.o \
      more_instructions.o \
      more_instructions_more.o \
      push_swap.o \
      rot_find.o \
      sort.o \
      sort_large.o \
      stacks.o \
      check_if_dup.o

CFLAGS = -Werror -Wall -Wextra

all: $(NAME)

$(NAME):
	make -C libft
	@gcc -c -g $(CFLAGS) $(SRC)
	ar rc $(NAME) $(SRCO)
	ranlib $(NAME)
	@gcc checker.c push_swap.a libft/libft.a -Wall -Werror -Wextra -o checker
	@gcc push_swap.c push_swap.a libft/libft.a -Wall -Werror -Wextra -o push_swap
	rm -f $(NAME)

clean:
	make clean -C libft
	rm -f $(SRCO)

fclean: clean
	make fclean -C libft
	rm -f checker push_swap

re: fclean all

.PHONY: all clean fclean 