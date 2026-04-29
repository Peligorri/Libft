# Libft
## What is Libft?

Libft is the first individual project from the 42 cursus. In this project, we have to redo some of the functions from the standard C library. This might help us understand how these functions work and how to implement them. At 42, we can't use any library other than the unistd.h library, so we have to create our own library to use in future projects.

## What does the project involve?

It's divided into 3 sections:
        1.- Libc functions: Here we have some functions from the standard C library.
        2.- Additional functions: These are functions that will be useful in future projects.
        3.- Bonus part: Here we reimplement functions that might be useful for linked list manipulation.
 
## What is a Makefile and how do we use it?

A Makefile is a type of file used by the make utility. This utility specifies which parts of a program need to be compiled and sends the necessary commands to do so. In short, a Makefile automates the compilation process instead of doing it manually.

To use make, we first need to create a Makefile. To do this, it is enough to create a file named Makefile or makefile. Both names are valid, but the GNU manual recommends using Makefile because it appears near the top of directory listings, along with other important files such as README.

## Function list

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
### Bonus part
        -`ft_lstnew`
        -`ft_lstadd_front`
        -`ft_lstsize`
        -`ft_lstlast`
        -`ft_lstadd_back`
        -`ft_lstdelone`
        -`ft_lstclear`
        -`ft_lstiter`
        -`ft_lstmap`

## Compilation

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