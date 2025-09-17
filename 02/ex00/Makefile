#* ******************************************************************************** *#
#*                                                                                  *#
#*                                                  ░▒▓██████▓▒░░▒▓███████▓▒░       *#
#*   Makefile                                       ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░     *#
#*                                                  ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░     *#
#*   By: Achille BOSC <achillebosc.dev@icloud.com>  ░▒▓████████▓▒░▒▓███████▓▒░      *#
#*                                                  ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░     *#
#*   Created: 2025/09/17 15:29 by AB                ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░     *#
#*                                                  ░▒▓█▓▒░░▒▓█▓▒░▒▓███████▓▒░      *#
#*                                                                                  *#
#* ******************************************************************************** *#

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = canon

OBJS_DIR = obj

SRCS =	main.cpp Fixed.cpp
OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))

all: $(NAME)

$(OBJS_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
