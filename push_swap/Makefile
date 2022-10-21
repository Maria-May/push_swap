NAME = push_swap
NAME_BONUS = checker

SRC = push_swap.c \
		validation.c \
		valid_utils.c \
		stack_utils_1.c \
		stack_utils_2.c \
		sort_functions.c \
		basic_operations.c \
		operations_1.c \
		operations_2.c \
		operations_3.c \
		mini_sort.c \
		main_sort.c \

SRC_B = checker_src/checker.c \
			validation.c \
			valid_utils.c \
			stack_utils_1.c \
			basic_operations.c \
			checker_src/operations_1.c \
			checker_src/operations_2.c \
			checker_src/operations_3.c \
			get_next_line/get_next_line.c \
			get_next_line/get_next_line_utils.c \
			

INCLUDES = push_swap.h
LIBFT = ./libft

OBJ = $(patsubst %.c, %.o, $(SRC))
OBJ_B = $(patsubst %.c, %.o, $(SRC_B))

FLAGS = -Wall -Werror -Wextra 

all: $(NAME)

bonus:	$(NAME_BONUS)

$(NAME): $(OBJ)
		make -C $(LIBFT)
		cc $(FLAGS) $(OBJ) -o $(NAME) -L./libft -lft

$(NAME_BONUS):		 $(OBJ_B)
		make -C $(LIBFT)
		cc $(FLAGS) $(OBJ_B) -o $(NAME_BONUS) -L./libft -lft

%.o : %.c	$(INCLUDES)
		cc $(FLAGS) -c  $< -o $@

clean:
		make clean -C ./libft
		rm -f $(OBJ) $(OBJ_B)

fclean: clean
		make fclean -C ./libft
		rm -f $(NAME) $(NAME_BONUS)

re: fclean all 

.PHONY: all clean fclean re 
