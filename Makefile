# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msorin <msorin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/06 16:09:33 by msorin            #+#    #+#              #
#    Updated: 2015/02/20 15:48:17 by msorin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a

SRC_ATI =	ft_atoi.c ft_itoa.c

SRC_IS =	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c

SRC_LST =	ft_lstadd.c ft_lstcpy.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c \
			ft_lstmap.c ft_lstnew.c

SRC_MEM =	ft_bzero.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
			ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c

SRC_PUT =	ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c \
			ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c

SRC_STR =	ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c \
			ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c \
			ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c \
			ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c \
			ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c \
			ft_strtrim.c

SRC_NAM =	$(SRC_ATI) $(SRC_IS) $(SRC_LST) $(SRC_MEM) $(SRC_PUT) $(SRC_STR)

F_ATI =		$(addprefix ft_aitoia_/,$(SRC_ATI))
F_IS =		$(addprefix ft_is_/,$(SRC_IS))
F_LST =		$(addprefix ft_lst_/,$(SRC_LST))
F_MEM =		$(addprefix ft_mem_/,$(SRC_MEM))
F_PUT =		$(addprefix ft_put_/,$(SRC_PUT))
F_STR =		$(addprefix ft_str_/,$(SRC_STR))

SRCS =		$(F_ATI) $(F_IS) $(F_LST) $(F_MEM) $(F_PUT) $(F_STR)

INC_FOL =	incl

INC_FIL =	libft.h define_lft.h

INC_LST =	$(addprefix $(addprefix $(INC_FOL),/),$(INC_FIL))

CFLAGS =	-Wall -Wextra -Werror

DEBUG =		-O0 -g

CC =		clang $(CFLAGS)

OBJ_NAME =	$(SRC_NAM:.c=.o)

OBJ_DIR =	obj/

OBJ =		$(addprefix $(OBJ_DIR),$(OBJ_NAME))

OSRC =		$(addprefix ../,$(SRCS))

OINCL =		$(addprefix ../,$(INC_FOL))

all:		$(NAME)

$(NAME): $(OBJ)
	@(ar rc $(NAME) $(OBJ))
	@(ranlib $(NAME))

$(OBJ):
	@(mkdir -p $(OBJ_DIR))
	@(cd $(OBJ_DIR) && $(CC) -c $(OSRC) -I$(OINCL))

debug:
	@(mkdir -p $(OBJ_DIR))
	@(cd $(OBJ_DIR) && $(CC) $(DEBUG) -c $(OSRC) -I$(OINCL))
	@(ar rc $(NAME) $(OBJ))
	@(ranlib $(NAME))

clean:
	@(rm -rf $(OBJ_DIR))

fclean: clean
	@(rm -f $(NAME))

re: fclean all

norme:
	norminette $(SRC) $(INCL_LST)

compile: re
	make fclean

.PHONY: all debug clean fclean re norme compile
