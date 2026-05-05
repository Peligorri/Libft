*This project has been created as part of the 42 curriculum by jangonza*

# Libft

## Description
### What is Libft?

Libft is the first individual project from the 42 cursus. In this project, we have to recreate some functions of the standard C library and create some new ones. We will then generate our own library that will be then used in our futures projects.

This might help us understand how these functions work and how to implement them.

### What does the project involve?

It's divided into 3 sections:
        1.- Libc functions: Here we have some functions from the standard C library.
        2.- Additional functions: These are functions that will be useful in future projects.
        3.- Linked list: Here we reimplement functions that might be useful for linked list manipulation.
 
### What is a Makefile and how do we use it?

A Makefile is a type of file used by the make utility. This file specifies which parts of a program need to be compiled and sends the necessary commands to do so. In short, a Makefile automates the compilation process instead of doing it manually.

To use make, we first need to create a Makefile. To do this, it is enough to create a file named Makefile or makefile. Both names are valid, but the GNU manual recommends using Makefile because it appears near the top of directory listings, along with other important files such as the README one.

## Functions list

### Libc functions
        -`ft_isalpha`
        -`ft_isdigit`
        -`ft_isalnum`
        -`ft_isascii`
        -`ft_isprint`
        -`ft_strlen`
        -`ft_memset`
        -`ft_bzero`
        -`ft_memcpy`
        -`ft_memmove`
        -`ft_strlcpy`
        -`ft_strlcat`
        -`ft_tolower`
        -`ft_toupper`
        -`ft_strchr`
        -`ft_strrchr`
        -`ft_strncmp`
        -`ft_memchr`
        -`ft_memcmp`
        -`ft_strnstr`
        -`ft_atoi`
        -`ft_calloc`
        -`ft_strdup`
### Additional functions
        -`ft_substr`
        -`ft_strjoin`
        -`ft_strtrim`
        -`ft_split`
        -`ft_itoa`
        -`ft_strmapi`
        -`ft_putchar_fd`
        -`ft_putstr_fd`
        -`ft_putendl_fd`
        -`ft_putnbr_fd`
        -`ft_striteri`
### Linked list
        -`ft_lstnew`
        -`ft_lstadd_front`
        -`ft_lstsize`
        -`ft_lstlast`
        -`ft_lstadd_back`
        -`ft_lstdelone`
        -`ft_lstclear`
        -`ft_lstiter`
        -`ft_lstmap`

## Instructions

First, clone the project repository, using the following commands in your terminal:

```bash
git clone git@github.com:Peligorri/Libft.git libft
cd libft
```

Once the repository has been cloned, compile the library by running `make`.
This will create the libft.a file.
Finally, add the following line to the header of your .c file:

```c
#include "libft.h"
```

Finally, compile your program with:

```bash
gcc main.c libft.a -I. -o program
```

## Resources

https://elcodigoascii.com.ar/
https://www.geeksforgeeks.org/cpp/write-memcpy/
https://pythontutor.com/visualize.html#mode=display
https://chatgpt.com/
