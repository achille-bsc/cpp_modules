# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abosc <abosc@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/24 13:03:29 by abosc             #+#    #+#              #
#    Updated: 2026/01/24 14:03:47 by abosc            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3
NAME = Form_28B

OBJS_DIR = obj

SRCS =	main.cpp					\
		Bureaucrat.cpp				\
		AForm.cpp			\
		ShrubberyCreationForm.cpp	\
		PresidentialPardonForm.cpp	\
		RobotomyRequestForm.cpp
		
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
