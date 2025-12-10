<div align="center">

# 📚 Libft - My First C Library

![42 Bangkok](https://img.shields.io/badge/42-Bangkok-000000?style=for-the-badge&logo=42&logoColor=white)
![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Norminette](https://img.shields.io/badge/Norminette-passing-success?style=for-the-badge)
![Functions](https://img.shields.io/badge/Functions-42-blueviolet?style=for-the-badge)

[![Français](https://img.shields.io/badge/🇫🇷_Français-Cliquez_ici-blue?style=for-the-badge)](README.md)

</div>

---

## 📝 Overview

<table>
<tr>
<td>

**Libft** is the first project of the 42 curriculum. I recoded **42 functions** from the standard C library, organized in 3 parts:

- ✅ **22 libc functions** (Part 1)
- ✅ **11 utility functions** (Part 2)
- ✅ **9 bonus functions** for linked lists

Strict compilation with `-Wall -Wextra -Werror` ✨

</td>
<td width="300">

```
📊 Statistics

Files:        43 .c
Functions:    42
Lines:        ~2000+
Tests:        Included
Bonus:        ✓ Complete
```

</td>
</tr>
</table>

---

## 📂 Project Structure

```
Libft/
├── 📄 Makefile          # Compilation
├── 📄 libft.h           # Header with all prototypes
├── 📄 test.c            # Test file
│
├── 🔵 PART 1: Libc functions (22 functions)
│   ├── ft_atoi.c        ├── ft_isalpha.c     ├── ft_isdigit.c
│   ├── ft_isalnum.c     ├── ft_isascii.c     ├── ft_isprint.c
│   ├── ft_tolower.c     ├── ft_toupper.c     ├── ft_bzero.c
│   ├── ft_memset.c      ├── ft_memcpy.c      ├── ft_memmove.c
│   ├── ft_memchr.c      ├── ft_memcmp.c      ├── ft_strlen.c
│   ├── ft_strchr.c      ├── ft_strrchr.c     ├── ft_strncmp.c
│   ├── ft_strnstr.c     ├── ft_strlcpy.c     ├── ft_strlcat.c
│   ├── ft_strdup.c      └── ft_calloc.c
│
├── 🟢 PART 2: Utility functions (11 functions)
│   ├── ft_substr.c      ├── ft_strjoin.c     ├── ft_strtrim.c
│   ├── ft_split.c       ├── ft_itoa.c        ├── ft_strmapi.c
│   ├── ft_striteri.c    ├── ft_putchar_fd.c  ├── ft_putstr_fd.c
│   ├── ft_putendl_fd.c  └── ft_putnbr_fd.c
│
└── 🟡 BONUS: Linked lists (9 functions)
    ├── ft_lstnew.c      ├── ft_lstadd_front.c ├── ft_lstadd_back.c
    ├── ft_lstsize.c     ├── ft_lstlast.c      ├── ft_lstdelone.c
    ├── ft_lstclear.c    ├── ft_lstiter.c      └── ft_lstmap.c
```

---

## 🎯 Implemented Functions

<details>
<summary><b>🔵 PART 1: Libc functions (22 functions)</b></summary>

### Tests & Conversions
| Function | Description | Prototype |
|----------|-------------|-----------|
| ![](https://img.shields.io/badge/-ft__atoi-blue) | String → Int | `int ft_atoi(const char *nptr)` |
| ![](https://img.shields.io/badge/-ft__isalpha-blue) | Check alphabetic | `int ft_isalpha(int c)` |
| ![](https://img.shields.io/badge/-ft__isdigit-blue) | Check digit | `int ft_isdigit(int c)` |
| ![](https://img.shields.io/badge/-ft__isalnum-blue) | Check alphanumeric | `int ft_isalnum(int c)` |
| ![](https://img.shields.io/badge/-ft__isascii-blue) | Check ASCII | `int ft_isascii(int c)` |
| ![](https://img.shields.io/badge/-ft__isprint-blue) | Check printable | `int ft_isprint(int c)` |
| ![](https://img.shields.io/badge/-ft__tolower-blue) | Lowercase | `int ft_tolower(int c)` |
| ![](https://img.shields.io/badge/-ft__toupper-blue) | Uppercase | `int ft_toupper(int c)` |

### Memory Manipulation
| Function | Description | Prototype |
|----------|-------------|-----------|
| ![](https://img.shields.io/badge/-ft__bzero-blue) | Zero memory | `void ft_bzero(void *s, size_t n)` |
| ![](https://img.shields.io/badge/-ft__memset-blue) | Fill memory | `void *ft_memset(void *s, int c, size_t n)` |
| ![](https://img.shields.io/badge/-ft__memcpy-blue) | Copy memory | `void *ft_memcpy(void *dest, const void *src, size_t n)` |
| ![](https://img.shields.io/badge/-ft__memmove-blue) | Copy overlap-safe ⭐ | `void *ft_memmove(void *dest, const void *src, size_t n)` |
| ![](https://img.shields.io/badge/-ft__memchr-blue) | Find byte | `void *ft_memchr(const void *s, int c, size_t n)` |
| ![](https://img.shields.io/badge/-ft__memcmp-blue) | Compare memory | `int ft_memcmp(const void *s1, const void *s2, size_t n)` |

### String Manipulation
| Function | Description | Prototype |
|----------|-------------|-----------|
| ![](https://img.shields.io/badge/-ft__strlen-blue) | String length | `size_t ft_strlen(const char *s)` |
| ![](https://img.shields.io/badge/-ft__strchr-blue) | Find character | `char *ft_strchr(const char *s, int c)` |
| ![](https://img.shields.io/badge/-ft__strrchr-blue) | Find char (end) | `char *ft_strrchr(const char *s, int c)` |
| ![](https://img.shields.io/badge/-ft__strncmp-blue) | Compare n chars | `int ft_strncmp(const char *s1, const char *s2, size_t n)` |
| ![](https://img.shields.io/badge/-ft__strnstr-blue) | Find substring | `char *ft_strnstr(const char *big, const char *little, size_t len)` |
| ![](https://img.shields.io/badge/-ft__strlcpy-blue) | Safe copy | `size_t ft_strlcpy(char *dst, const char *src, size_t size)` |
| ![](https://img.shields.io/badge/-ft__strlcat-blue) | Safe concat | `size_t ft_strlcat(char *dst, const char *src, size_t size)` |
| ![](https://img.shields.io/badge/-ft__strdup-blue) | Duplicate | `char *ft_strdup(const char *s)` |
| ![](https://img.shields.io/badge/-ft__calloc-blue) | Allocate+init ⭐ | `void *ft_calloc(size_t nmemb, size_t size)` |

</details>

<details>
<summary><b>🟢 PART 2: Utility functions (11 functions)</b></summary>

### Allocation & String Manipulation
| Function | Description | Prototype |
|----------|-------------|-----------|
| ![](https://img.shields.io/badge/-ft__substr-green) | Extract substring ⭐ | `char *ft_substr(char const *s, unsigned int start, size_t len)` |
| ![](https://img.shields.io/badge/-ft__strjoin-green) | Concatenate 2 strings | `char *ft_strjoin(char const *s1, char const *s2)` |
| ![](https://img.shields.io/badge/-ft__strtrim-green) | Trim characters ⭐ | `char *ft_strtrim(char const *s1, char const *set)` |
| ![](https://img.shields.io/badge/-ft__split-green) | Split by delimiter ⭐ | `char **ft_split(char const *s, char c)` |
| ![](https://img.shields.io/badge/-ft__itoa-green) | Int → String ⭐ | `char *ft_itoa(int n)` |

### Map & Iteration
| Function | Description | Prototype |
|----------|-------------|-----------|
| ![](https://img.shields.io/badge/-ft__strmapi-green) | Map function on string | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` |
| ![](https://img.shields.io/badge/-ft__striteri-green) | Iterate with function | `void ft_striteri(char *s, void (*f)(unsigned int, char*))` |

### File Descriptor Output
| Function | Description | Prototype |
|----------|-------------|-----------|
| ![](https://img.shields.io/badge/-ft__putchar__fd-green) | Output char | `void ft_putchar_fd(char c, int fd)` |
| ![](https://img.shields.io/badge/-ft__putstr__fd-green) | Output string | `void ft_putstr_fd(char *s, int fd)` |
| ![](https://img.shields.io/badge/-ft__putendl__fd-green) | Output string+\\n | `void ft_putendl_fd(char *s, int fd)` |
| ![](https://img.shields.io/badge/-ft__putnbr__fd-green) | Output int (recursive) ⭐ | `void ft_putnbr_fd(int n, int fd)` |

</details>

<details>
<summary><b>🟡 BONUS: Linked lists (9 functions)</b></summary>

### Structure
```c
typedef struct s_list {
    void            *content;
    struct s_list   *next;
} t_list;
```

### Functions
| Function | Description | Prototype |
|----------|-------------|-----------|
| ![](https://img.shields.io/badge/-ft__lstnew-yellow) | Create node | `t_list *ft_lstnew(void *content)` |
| ![](https://img.shields.io/badge/-ft__lstadd__front-yellow) | Add front | `void ft_lstadd_front(t_list **lst, t_list *new)` |
| ![](https://img.shields.io/badge/-ft__lstadd__back-yellow) | Add back | `void ft_lstadd_back(t_list **lst, t_list *new)` |
| ![](https://img.shields.io/badge/-ft__lstsize-yellow) | List size | `int ft_lstsize(t_list *lst)` |
| ![](https://img.shields.io/badge/-ft__lstlast-yellow) | Last node | `t_list *ft_lstlast(t_list *lst)` |
| ![](https://img.shields.io/badge/-ft__lstdelone-yellow) | Delete one node | `void ft_lstdelone(t_list *lst, void (*del)(void*))` |
| ![](https://img.shields.io/badge/-ft__lstclear-yellow) | Clear list | `void ft_lstclear(t_list **lst, void (*del)(void*))` |
| ![](https://img.shields.io/badge/-ft__lstiter-yellow) | Iterate | `void ft_lstiter(t_list *lst, void (*f)(void *))` |
| ![](https://img.shields.io/badge/-ft__lstmap-yellow) | Map on list ⭐ | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` |

</details>

> ⭐ = Implementation with notable features (see next section)

---

## ⚙️ Implementation Features

<table>
<tr>
<td>

**🔹 ft_memmove - Overlap-Safe**

Copies correctly even if memory areas overlap:
```c
if (dest > src)
    // Copy from end to start
else
    // Copy from start to end
```

</td>
<td>

**🔹 ft_split - Error handling**

3 internal functions + `free_tab()`:
```c
count_word()
when_next_sep()
add_in_tab()  // + malloc error handling
```

</td>
</tr>

<tr>
<td>

**🔹 ft_itoa - Long for negatives**

Uses `long` to handle INT_MIN:
```c
int ft_nbrsize(long nbr)
{
    int len = 0;
    if (nbr <= 0) len++;
    while (nbr) nbr /= 10, len++;
    return (len);
}
```

</td>
<td>

**🔹 ft_substr - Secure**

- Checks start >= len → empty string
- Automatically limits len to available length

</td>
</tr>

<tr>
<td>

**🔹 ft_strtrim - Custom set**

Removes a SET of characters:
```c
in_set()  // Check if char in set
```

</td>
<td>

**🔹 ft_putnbr_fd - Recursive**

Elegant recursive approach:
```c
if (n >= 10)
    ft_putnbr_fd(n / 10, fd);
ft_putchar_fd(n % 10 + '0', fd);
```

</td>
</tr>

<tr>
<td>

**🔹 ft_lstmap - Auto cleanup**

If creation fails, cleans up:
```c
if (!new_node) {
    if (del) del(new_content);
    ft_lstclear(&new_list, del);
    return (NULL);
}
```

</td>
<td>

**🔹 ft_calloc - Overflow check**

Cast to `long`:
```c
if ((long)nmemb < 0 || (long)size < 0)
    return (NULL);
```

</td>
</tr>
</table>

---

## 🛠️ Compilation

```bash
# Compile the library
make

# Compile with bonus (linked lists)
make bonus

# Clean object files
make clean

# Clean everything (objects + libft.a)
make fclean

# Recompile completely
make re
```

**Makefile rules:**
```makefile
CC = cc
FLAG = -Wall -Wextra -Werror
NAMELIB = libft.a

# Pattern rule
.c.o:
    ${CC} ${FLAG} -c $< -o $@

# Static archive
${NAMELIB}: ${OBJ}
    ar rcs ${NAMELIB} ${OBJ}
```

---

## 💻 Usage

```c
#include "libft.h"

int main(void)
{
    // Use ft_split
    char **tab = ft_split("Hello World 42", ' ');
    for (int i = 0; tab[i]; i++)
        ft_putendl_fd(tab[i], 1);

    // Use ft_itoa
    char *nbr = ft_itoa(42);
    ft_putstr_fd("Number: ", 1);
    ft_putendl_fd(nbr, 1);
    free(nbr);

    // Use linked lists
    t_list *lst = ft_lstnew(ft_strdup("Node 1"));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Node 2")));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Node 3")));

    ft_lstiter(lst, print_content);  // Custom function

    return (0);
}
```

**Compile with libft:**
```bash
gcc main.c -L. -lft -o program
./program
```

---

## ✅ Tests & Validation

```bash
# Test included in test.c
./test.c  # Test ft_putchar_fd('H', 1)

# Test with Tripouille
git clone https://github.com/Tripouille/libftTester.git
cd libftTester
make

# Test with War Machine
git clone https://github.com/y3ll0w42/libft-war-machine.git
cd libft-war-machine
bash grademe.sh
```

---

<div align="center">

## 📊 Summary

| Metric | Value |
|:------:|:-----:|
| ![](https://img.shields.io/badge/Functions-42-blueviolet?style=flat-square) | ![](https://img.shields.io/badge/Part_1-22-blue?style=flat-square) ![](https://img.shields.io/badge/Part_2-11-green?style=flat-square) ![](https://img.shields.io/badge/Bonus-9-yellow?style=flat-square) |
| ![](https://img.shields.io/badge/Files_.c-43-informational?style=flat-square) | ![](https://img.shields.io/badge/Lines-~2000+-orange?style=flat-square) |
| ![](https://img.shields.io/badge/Norminette-✓-success?style=flat-square) | ![](https://img.shields.io/badge/Compilation-Wall_Wextra_Werror-red?style=flat-square) |

---

**Made with ❤️ for 42 Bangkok**

[![Back to top](https://img.shields.io/badge/⬆-Back_to_top-red?style=for-the-badge)](#-libft---my-first-c-library)

</div>
