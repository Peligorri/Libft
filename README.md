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
`ft_isalpha`: \
Checks  for  an alphabetic character; in the standard "C" locale, it is equivalent to (isupper(c) || islower(c)).  In some locales, there may be additional characters for which isalpha()  is  trueletters which are neither uppercase nor lowercase.\
`ft_isdigit`: \ 
Checks for a digit (0 through 9).
`ft_isalnum`: \
Checks for an alphanumeric character; it is equivalent to  (isalpha(c) || isdigit(c)). \
        -`ft_isascii`: 
Checks  whether  c  is a 7-bit unsigned char value that fits into the ASCII character set.
        -`ft_isprint`: 
Checks for any printable character including space.
        -`ft_strlen`: 
The  strlen() function calculates the length of the string pointed to by s, excluding the terminating null byte ('\0').
        -`ft_memset`: 
The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte c.
        -`ft_bzero`: 
The bzero() function erases the data in the n bytes of the memory starting  at the location pointed to by s, by writing zeros (bytes containing '\0') to that area.
        -`ft_memcpy`: 
The memcpy() function copies n bytes from memory area src to memory area dest. The memory areas must not overlap.  Use memmove(3) if the memory areas do overlap.
        -`ft_memmove`: 
The  memmove()  function  copies  n bytes from memory area src to memory area dest. The memory areas may overlap: copying takes place as  though the  bytes  in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied  from  the  temporary array to dest.
        -`ft_strlcpy`: 
It copies the source string (src) into the destination buffer (dst) while preventing buffer overflows by respecting the specified size.
        -`ft_strlcat`: 
It appends the source string (src) to the destination buffer (dst) while preventing buffer overflows by respecting the specified size.
        -`ft_tolower`: 
These functions convert uppercase letters to lowercase.
        -`ft_toupper`: 
These functions convert lowercase letters to uppercase.
        -`ft_strchr`: 
The  strchr()  function returns a pointer to the first occurrence of the character c in the string s.
        -`ft_strrchr`: 
The strrchr() function returns a pointer to the last occurrence  of  the character c in the string s.
        -`ft_strncmp`: 
The strncmp() function compares two strings, s1 and s2, using unsigned characters. It compares only the first (at most) n bytes of both strings.
        -`ft_memchr`:
The  memchr()  function  scans  the  initial  n bytes of the memory area pointed to by s for the first instance of c.  Both c and  the  bytes  of the memory area pointed to by s are interpreted as unsigned char.
        -`ft_memcmp`:
The memcmp() function returns an integer less than, equal to, or greater than zero if the first n bytes of s1 is found, respectively, to be  less than, to match, or be greater than the first n bytes of s2.
        -`ft_strnstr`:
The strnstr() function locates the first occurrence of the substring little in the string big, searching only within the first len bytes of big.
        -`ft_atoi`:
The atoi() function converts the initial portion of the string pointed to by str into an integer value.
        -`ft_calloc`:
The calloc() function allocates memory for an array  of  n  elements  of size bytes each and returns a pointer to the allocated memory.  The memory  is  set to zero.  If n or size is 0, then calloc() returns a unique pointer value that can later be successfully passed to free().
        -`ft_strdup`:
The  strdup()  function returns a pointer to a new string which is a duplicate of the string s.  Memory for the new  string  is  obtained  with malloc(3), and can be freed with free(3).
### Additional functions
        -`ft_substr`:
Allocates memory (using malloc(3)) and returns a substring from the string ’s’. The substring starts at index ’start’ and has a maximum length of ’len’.
        -`ft_strjoin`:
Allocates memory (using malloc(3)) and returns a new string, which is the result of concatenating ’s1’ and ’s2’
        -`ft_strtrim`:
Allocates memory (using malloc(3)) and returns a copy of ’s1’ with characters from ’set’ removed from the beginning and the end.
        -`ft_split`:
Allocates memory (using malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. Each string in the returned array is allocated independently. The array of pointers itself is also allocated dynamically. The returned array must be NULL terminated.
        -`ft_itoa`:
Allocates memory (using malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.
        -`ft_strmapi`:
Applies the function f to each character of the string s, passing its index as the first argument and the character itself as the second. A new string is created (using malloc(3)) to store the results from the successive applications of f.
        -`ft_putchar_fd`:
Outputs the character ’c’ to the specified file descriptor.
        -`ft_putstr_fd`:
Outputs the string ’s’ to the specified file descriptor.
        -`ft_putendl_fd`:
Outputs the string ’s’ to the specified file descriptor followed by a newline.
        -`ft_putnbr_fd`:
Outputs the integer ’n’ to the specified file descriptor.
        -`ft_striteri`:
Applies the function ’f’ to each character of the string passed as argument, passing its index as the first argument. Each character is passed by address to ’f’ so it can be modified if necessary.
### Linked list
        -`ft_lstnew`:
Allocates memory (using malloc(3)) and returns a new node. The ’content’ member variable is initialized with the given parameter ’content’. The variable ’next’ is initialized to NULL.
        -`ft_lstadd_front`:
Adds the node ’new’ at the beginning of the list.
        -`ft_lstsize`:
Counts the number of nodes in the list.
        -`ft_lstlast`:
Returns the last node of the list.
        -`ft_lstadd_back`:
Adds the node ’new’ at the end of the list.
        -`ft_lstdelone`:
Takes a node as parameter and frees its content using the function ’del’. Free the node itself but does NOT free the next node.
        -`ft_lstclear`:
Deletes and frees the given node and all its successors, using the function ’del’ and free(3). Finally, set the pointer to the list to NULL.
        -`ft_lstiter`:
Iterates through the list ’lst’ and applies the function ’f’ to the content of each node.
        -`ft_lstmap`:
Iterates through the list ’lst’, applies the function ’f’ to each node’s content, and creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed.

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

        - https://elcodigoascii.com.ar/
I used this website to check ASCII codes while I was programming the functions.
        - https://www.geeksforgeeks.org/cpp/write-memcpy/
This website helped me understand the differences between the memcpy and memmove functions. It was very useful for learning how they work.
        - https://pythontutor.com/visualize.html#mode=display
Python Tutor was a very useful tool for seeing where my code crashes and how to fix it.
        - https://chatgpt.com/
I used ChatGPT as a *Moulinette* to check whether my code was correct or not. It was also useful for better understanding what the functions do. Finally, I used it to improve my English texts so they look more polished and professional. I never used it to figure out how to write the code or to get direct answers for any function.