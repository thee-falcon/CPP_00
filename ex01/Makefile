# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omakran <omakran@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/12 12:13:29 by omakran           #+#    #+#              #
#    Updated: 2024/01/12 12:59:35 by omakran          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = my_awesome_phonbook

SRCS = main.cpp PhoneBook.cpp Contact.cpp

OBJS := $(SRCS:.cpp=.o)

CC = c++

CPPFLAGS = -std=c++98 -Wall -Werror -Wextra

all: $(EXEC)

$(EXEC):	$(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(EXEC)

%.o:	%.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re