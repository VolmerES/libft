
---

![cover-libft-bonus.png](Libft%20Images/cover-libft-bonus.png)

## My First C Library
---

![Screen Shot 2024-02-29 at 5.15.53 PM.png](Libft%20Images/Screen_Shot_2024-02-29_at_5.15.53_PM.png)

### INDEX

---

- [What is libft?](https://www.notion.so/Libft-Readme-ba2d5401a5014824bed9774600f38a3d?pvs=21)
- [What's in it?](https://www.notion.so/Libft-Readme-ba2d5401a5014824bed9774600f38a3d?pvs=21)
- [How does it work?](https://www.notion.so/Libft-Readme-ba2d5401a5014824bed9774600f38a3d?pvs=21)

---

## [What is libft?](https://www.notion.so/Libft-Readme-ba2d5401a5014824bed9774600f38a3d?pvs=21)

---

Libft is an individual project at [42](https://www.42madrid.com/) that requires us to re-create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.

## [What's in it?](https://www.notion.so/Libft-Readme-ba2d5401a5014824bed9774600f38a3d?pvs=21)

---

| Libc functions | Additional functions | Bonus Functions | Personal Functions |
| --- | --- | --- | --- |
| isalpha | ft_substr | ft_lstnew | get_next_line |
| isdigit | ft_strjoin | ft_lstadd_front | - |
| isalnum | ft_strtrim | ft_lstsize | - |
| isascii | ft_split | ft_lstlast | - |
| isprint | ft_itoa | ft_lstadd_back | - |
| strlen | ft_strmapi | ft_lstdelone | - |
| memset | ft_striteri | ft_lstclear | - |
| bzero | ft_putchar_fd | ft_lstiter | - |
| memcpy | ft_putstr_fd | ft_lstmap | - |
| memmove | ft_putendl_fd | - | - |
| strlcpy | ft_putnbr_fd | - | - |
| strlcat | - | - | - |
| toupper | - | - | - |
| tolower | - | - | - |
| strrchr | - | - | - |
| strchr | - | - | - |
| strncmp | - | - | - |
| memchr | - | - | - |
| memcmp | - | - | - |
| strnstr | - | - | - |
| atoi | - | - | - |
| calloc | - | - | - |
| strdup | - | - | - |

## [How does it work?](https://www.notion.so/Libft-Readme-ba2d5401a5014824bed9774600f38a3d?pvs=21)

---

1. Clone this repo and cd into it, make sure it's called `libft`:
    
    ```bash
     git clone https://github.com/VolmerES/libft.git
     cd libft/
    ```
    
2. Run Make so you can build the library:
    
    ```bash
    make
    ```
    
    ### Other makefile rules you can use:
    
    ```bash
    make - compile libft mandatory files
    make bonus - compile libft bonus files
    make all - compile all (mandatory + bonus) files
    make clean - delete all *.o files
    make fclean - delete all *.o & *.a (executable) files
    make re - use fclean + all, recompile libft
    ```
    

3 - To include it in your code, include the header

```c
#include 'libft.h"
```

## License

This project is licensed under the MIT License. See the [LICENSE](https://opensource.org/license/mit) file for details.
