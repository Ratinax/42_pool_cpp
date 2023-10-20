# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tibernot <tibernot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 14:46:33 by tibernot          #+#    #+#              #
#    Updated: 2023/02/24 11:02:22 by tibernot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Changing variables
NAME = megaphone

HEADER = 

HEADER_DIR = .

SRCS = megaphone.cpp

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I $(HEADER_DIR)

RM = rm
RM_FLAGS = -rf
OBJS = $(SRCS:.cpp=.o)

DIROBJS=objs/

all: $(NAME)

$(NAME): $(DIROBJS) $(addprefix $(DIROBJS), $(OBJS))
	$(CC) $(CFLAGS) $(addprefix $(DIROBJS), $(OBJS)) -o $(NAME)

$(DIROBJS)%.o: %.cpp Makefile $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(DIROBJS):
	mkdir $(DIROBJS)

clean:
	$(RM) $(RM_FLAGS) $(DIROBJS)

fclean : clean
	$(RM) $(RM_FLAGS) $(NAME)

re : fclean	all

.PHONY: all re fclean clean
