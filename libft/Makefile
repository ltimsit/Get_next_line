# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ltimsit- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/04 13:15:05 by ltimsit-          #+#    #+#              #
#    Updated: 2019/04/22 15:34:52 by ltimsit-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
WFLAG = -c -Wall -Werror -Wextra
SRCS = ft_atoi ft_bzero ft_isalnum ft_isalpha ft_isascii \
ft_isdigit ft_isprint ft_itoa ft_lstadd ft_lstdel ft_lstdelone \
ft_lstiter ft_lstmap ft_lstnew ft_memalloc ft_memccpy ft_memchr \
ft_memcmp ft_memcpy ft_memdel ft_memmove ft_memset ft_putchar \
ft_putchar_fd ft_putendl ft_putendl_fd ft_putnbr ft_putnbr_fd \
ft_putstr ft_putstr_fd ft_strcat ft_strchr ft_strclr ft_strcmp \
ft_strcpy ft_strdel ft_strdup ft_strequ ft_striter ft_striteri \
ft_strjoin ft_strlcat ft_strlen ft_strmap ft_strmapi ft_strncat \
ft_strncmp ft_strncpy ft_strnequ ft_strnew ft_strnstr ft_strrchr \
ft_strsplit ft_strstr ft_strsub ft_strtrim ft_tolower ft_toupper \
ft_strnlen ft_strndup ft_strtrimc

CSRCS = $(addsuffix .c, $(SRCS))
OSRCS = $(addsuffix .o, $(SRCS))

all : $(NAME)

$(NAME) : $(CSRCS)
	gcc $(WFLAG) $(CSRCS) -Iincludes
	ar rc $(NAME) $(OSRCS)
	ranlib $(NAME)

clean : 
	rm -rf $(OSRCS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : re clean fclean all
