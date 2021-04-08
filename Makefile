# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/11 09:33:15 by dda-silv          #+#    #+#              #
#    Updated: 2021/04/08 11:03:25 by dda-silv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the program built
NAME			:=		libft.a

# Name directory
PATH_SRC		:=		src
PATH_BUILD		:=		build

# List of sources
SRCS			:=		$(shell find $(PATH_SRC) -name *.c)
OBJS			:=		$(SRCS:%.c=$(PATH_BUILD)/%.o)
DEPS			:=		$(OBJS:.o=.d)
INC_DIRS		:=		$(shell find $(PATH_SRC) -type d)

# Compiler
CC				:=		gcc

# Flags - compilation
FLAG_WARNING	:=		-Wall -Wextra -Werror
FLAG_INC		:= 		$(addprefix -I, $(INC_DIRS))
FLAG_MAKEFILE	:=		-MMD -MP
FLAG_DEBUG		:= 		-g
FLAGS_COMP		:= 		$(FLAG_WARNING) $(FLAG_INC) $(FLAG_MAKEFILE) $(FLAG_DEBUG)

# Flags - memory leak check
FLAG_MEM_LEAK	:= 		-fsanitize=address

# Others commands
RM				:=		rm -rf
ARRC			:=		ar rcs

# Color Code and template code
_YELLOW			=		\e[38;5;184m
_GREEN			=		\e[38;5;46m
_RESET			=		\e[0m
_INFO			=		[$(_YELLOW)INFO$(_RESET)]
_SUCCESS		=		[$(_GREEN)SUCCESS$(_RESET)]

# Functions
all:					init $(NAME)
						@ printf "$(_SUCCESS) Compilation done\n"

debug:					FLAGS_COMP += $(FLAG_MEM_LEAK)
debug:					re

init:
						@ printf "$(_INFO) Initialize $(NAME)\n"

$(NAME):				$(OBJS)
						@ $(ARRC) $@ $(OBJS)

bonus:					all

$(PATH_BUILD)/%.o:		%.c
						@ mkdir -p $(dir $@)
						@ $(CC) $(FLAGS_COMP) -c $< -o $@

clean:
						@ $(RM) -rf $(PATH_BUILD)
						@ printf "$(_INFO) Deleted files and directory\n"

fclean:					clean
						@ $(RM) $(NAME)

re:						fclean all

normH:
						@ norminette $(shell find $(PATH_SRC) -name *.h)

normC:
						@ norminette $(SRCS)

norm:					normH normC

.PHONY:					all clean fclean re

-include $(DEPS)

# Source for some pieces of this Makefile: 
# https://makefiletutorial.com/#makefile-cookbook