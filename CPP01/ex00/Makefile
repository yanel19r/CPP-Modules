GREEN        := \033[0;32m
BOLD_RED     := \033[1;31m
BOLD_GREEN   := \033[1;32m
BOLD_YELLOW  := \033[1;33m
BOLD_MAGENTA := \033[1;35m
RESET        := \033[0m

NAME         := brain
COMPILER     := c++
RM           := rm -rf

HEADER_DIR   := include
HEADERS		 := $(wildcard $(HEADER_DIR)/*.hpp)
CFLAGS       := -Wall -Wextra -Werror -std=c++98 -I$(HEADER_DIR)

SRC_FILES    := $(wildcard *.cpp)
OBJ_FILES    := $(SRC_FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	@echo "$(GREEN)Linking object files...$(RESET)"
	@$(COMPILER) $(CFLAGS) $(OBJ_FILES) -o $(NAME)
	@echo "$(BOLD_GREEN)Executable '$(NAME)' created!$(RESET)"

%.o: %.cpp $(HEADERS)
	@echo "$(BOLD_YELLOW)Compiling: $<...$(RESET)"
	@$(COMPILER) $(CFLAGS) -c $< -o $@

clean:
	@echo "$(BOLD_RED)Deleting object files...$(RESET)"
	@$(RM) $(OBJ_FILES)

fclean: clean
	@echo "$(BOLD_MAGENTA)Removing executable '$(NAME)'...$(RESET)"
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
