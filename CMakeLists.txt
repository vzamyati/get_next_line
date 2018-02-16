cmake_minimum_required(VERSION 3.9)
project(gnl C)

set(CMAKE_C_STANDARD 11)

add_executable(gnl main.c
        get_next_line.c
        get_next_line.h
        libft/ft_putstr.c
        libft/ft_strlen.c
        libft/ft_strjoin.c
        libft/ft_strnew.c
        libft/ft_strdup.c
        libft/ft_strchr.c
        libft/ft_bzero.c
        libft/ft_memalloc.c
        libft/ft_strsub.c
        libft/ft_memset.c)