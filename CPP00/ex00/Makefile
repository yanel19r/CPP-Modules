GREEN   := \033[0;32m
BOLD_RED     := \033[1;31m
BOLD_GREEN   := \033[1;32m
BOLD_YELLOW  := \033[1;33m
BOLD_MAGENTA := \033[1;35m

NAME = megaphone
COMPILER = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf


SRC_FILES = $(wildcard *.cpp)
OBJ_FILES = $(SRC_FILES:.cpp=.o)

$(NAME): $(OBJ_FILES)
	@echo "$(GREEN)Linking object files...$(RESET)"
	@$(COMPILER) $(CFLAGS) $(OBJ_FILES) -o $(NAME)
	@echo "$(BOLD_GREEN)Executable created!$(RESET)"


%.o: %.cpp
	@echo "$(BOLD_YELLOW)Compiling sources files into objects files...$(RESET)"
	@$(COMPILER) $(CFLAGS) -c $< -o $@
	

all: $(NAME)

clean:
	@echo "$(BOLD_RED)Deleting object files folder...$(RESET)"
	@$(RM) $(OBJ_FILES)

fclean: clean
	@echo "$(BOLD_MAGENTA)Removing executable...$(RESET)"
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re