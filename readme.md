# libft

![libft cover](Libft%20Images/cover-libft-bonus.png)

> *My first C library.*

The first project of the 42 Madrid common core: rewrite a set of standard C library functions, plus some
extra string, output and linked-list utilities. The result is `libft.a`, a static library that the
later projects of the cursus build on.

**Grade: 125/100** (with bonus)

![Evaluation](Libft%20Images/Screen_Shot_2024-02-29_at_5.15.53_PM.png)

## What's inside

| libc functions | Extra functions | Linked lists (bonus) | Added later |
|---|---|---|---|
| `ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint` | `ft_substr` | `ft_lstnew` | `get_next_line` |
| `ft_toupper` `ft_tolower` | `ft_strjoin` | `ft_lstadd_front` | |
| `ft_strlen` `ft_strlcpy` `ft_strlcat` | `ft_strtrim` | `ft_lstadd_back` | |
| `ft_strchr` `ft_strrchr` `ft_strncmp` `ft_strnstr` | `ft_split` | `ft_lstsize` | |
| `ft_memset` `ft_bzero` `ft_memcpy` `ft_memmove` | `ft_itoa` | `ft_lstlast` | |
| `ft_memchr` `ft_memcmp` | `ft_strmapi` `ft_striteri` | `ft_lstdelone` | |
| `ft_atoi` | `ft_putchar_fd` `ft_putstr_fd` | `ft_lstclear` | |
| `ft_calloc` `ft_strdup` | `ft_putendl_fd` `ft_putnbr_fd` | `ft_lstiter` `ft_lstmap` | |

## Build and use

```bash
git clone https://github.com/VolmerES/libft.git
cd libft
make            # libft.a with the mandatory functions and get_next_line
make bonus      # adds the linked-list functions
```

```c
#include "libft.h"

int main(void)
{
    char **words = ft_split("hello from libft", ' ');

    ft_putendl_fd(words[2], 1);
    return (0);
}
```

```bash
cc main.c -L. -lft
```

| Rule | What it does |
|---|---|
| `make` | Build `libft.a` |
| `make bonus` | Add the linked-list functions to `libft.a` |
| `make clean` | Remove object files |
| `make fclean` | Remove object files and the library |
| `make re` | `fclean` + `make` |

---

Made by **Juan Bautista Delorme** (`jdelorme`) at 42 Madrid ·
[Portfolio](https://juandelorme-portfolio.volmer.es) · [42 intra](https://profile.intra.42.fr/users/jdelorme)
