<div align="center">
  <img src="https://raw.githubusercontent.com/ayogun/42-project-badges/main/covers/cover-libft-bonus.png" alt="libft" />
</div>

# Libft - My First C Library

The `Libft` project is the first project of the 42 curriculum. It consists of recoding **42 functions** from the standard C library, organized in 3 parts: libc functions, utility functions, and bonus functions for linked lists.

## Status
<div align="center">

![42 Bangkok](https://img.shields.io/badge/42-Bangkok-000000?style=for-the-badge&logo=42&logoColor=white)
![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Norminette](https://img.shields.io/badge/Norminette-passing-success?style=for-the-badge)

[![Français](https://img.shields.io/badge/🇫🇷_Français-Cliquez_ici-blue?style=for-the-badge)](README.md)

</div>

---

## Overview

**Libft** allows you to create your own library of reusable C functions for all future 42 curriculum projects. This project strengthens understanding of data structures and basic algorithms.

### What I implemented:
- ✅ **22 libc functions** (Part 1)
- ✅ **11 utility functions** (Part 2)
- ✅ **9 bonus functions** for linked lists

---

## 📋 Mandatory Part

<table>
  <tr>
    <th>Program name</th>
    <td>libft.a</td>
  </tr>
  <tr>
    <th>Turn in files</th>
    <td>Makefile, libft.h, *.c</td>
  </tr>
  <tr>
    <th>Makefile</th>
    <td>all, clean, fclean, re, bonus</td>
  </tr>
  <tr>
    <th>External functs.</th>
    <td>malloc, free, write</td>
  </tr>
  <tr>
    <th>Description</th>
    <td>Code a C library of useful functions for 42 projects</td>
  </tr>
</table>

### Important Rules
- Global variables are forbidden.
- Compilation with the flags `-Wall -Wextra -Werror`.
- No segfault, bus error, double free, etc.
- Use `ar` to create the static library.

---

## 📂 Project Structure

```
Libft/
├── 📄 Makefile              # Compilation → libft.a
│
├── 📁 include/              # Headers
│   └── libft.h              # All function prototypes
│
└── 📁 src/                  # Sources (42 functions)
    ├── Part 1 (22 libc functions)
    ├── Part 2 (11 utility functions)
    └── Bonus (9 linked list functions)
```

---

## 🎯 Implemented Functions

### Part 1: Libc functions (22 functions)

<details>
<summary><b>Click to see functions</b></summary>

#### Tests & Conversions
- `ft_atoi` - Convert string to integer
- `ft_isalpha` - Test if alphabetic character
- `ft_isdigit` - Test if digit
- `ft_isalnum` - Test if alphanumeric
- `ft_isascii` - Test if ASCII character
- `ft_isprint` - Test if printable character
- `ft_tolower` - Convert to lowercase
- `ft_toupper` - Convert to uppercase

#### Memory Manipulation
- `ft_bzero` - Set memory area to zero
- `ft_memset` - Fill memory area
- `ft_memcpy` - Copy memory area
- `ft_memmove` - Copy memory (overlap-safe)
- `ft_memchr` - Search byte in memory
- `ft_memcmp` - Compare two memory areas

#### String Manipulation
- `ft_strlen` - Calculate string length
- `ft_strchr` - Search character in string
- `ft_strrchr` - Search character (from end)
- `ft_strncmp` - Compare n characters of two strings
- `ft_strnstr` - Search substring
- `ft_strlcpy` - Safe string copy
- `ft_strlcat` - Safe concatenation
- `ft_strdup` - Duplicate string
- `ft_calloc` - Memory allocation initialized to 0

</details>

### Part 2: Utility functions (11 functions)

<details>
<summary><b>Click to see functions</b></summary>

#### Allocation & String Manipulation
- `ft_substr` - Extract substring
- `ft_strjoin` - Concatenate two strings
- `ft_strtrim` - Remove characters at start/end
- `ft_split` - Split string by delimiter
- `ft_itoa` - Convert int to string

#### Map & Iteration
- `ft_strmapi` - Apply function on each character
- `ft_striteri` - Iterate on string with function

#### File Descriptor Output
- `ft_putchar_fd` - Print character to fd
- `ft_putstr_fd` - Print string to fd
- `ft_putendl_fd` - Print string + newline to fd
- `ft_putnbr_fd` - Print int to fd

</details>

### Bonus: Linked lists (9 functions)

<details>
<summary><b>Click to see functions</b></summary>

#### Structure
```c
typedef struct s_list {
    void            *content;
    struct s_list   *next;
} t_list;
```

#### Functions
- `ft_lstnew` - Create new node
- `ft_lstadd_front` - Add node at beginning
- `ft_lstadd_back` - Add node at end
- `ft_lstsize` - Count number of nodes
- `ft_lstlast` - Return last node
- `ft_lstdelone` - Delete one node
- `ft_lstclear` - Delete entire list
- `ft_lstiter` - Iterate on list
- `ft_lstmap` - Apply function and create new list

</details>

---

## 🛠️ Compilation and Usage

### Compile the Library

```bash
# Compile mandatory part
make

# Compile with bonus
make bonus

# Clean object files
make clean

# Clean everything
make fclean

# Recompile completely
make re
```

### Use in Your Code

```c
#include "libft.h"

int main(void)
{
    // Use ft_split
    char **words = ft_split("Hello World 42", ' ');
    for (int i = 0; words[i]; i++)
        ft_putendl_fd(words[i], 1);

    // Use ft_itoa
    char *number = ft_itoa(42);
    ft_putstr_fd("Number: ", 1);
    ft_putendl_fd(number, 1);
    free(number);

    // Use linked lists
    t_list *list = ft_lstnew(ft_strdup("Node 1"));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("Node 2")));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("Node 3")));

    return (0);
}
```

### Compile with libft

```bash
gcc main.c -L. -lft -I./include -o program
./program
```

---

## 💡 Implementation Highlights

<details>
<summary><b>🔹 ft_split - Robust Error Handling</b></summary>

The `ft_split` function uses several internal functions to split a string:
- `count_word()` - Count number of words
- `when_next_sep()` - Find next separator
- `add_in_tab()` - Add word to array with malloc handling

In case of allocation failure, all previously allocated memory is freed.

</details>

<details>
<summary><b>🔹 ft_memmove - Overlap-Safe</b></summary>

Correctly handles overlapping memory areas:
```c
if (dest > src)
    // Copy from end to start
else
    // Copy from start to end
```

</details>

<details>
<summary><b>🔹 ft_lstmap - Automatic Cleanup</b></summary>

In case of failure when creating a new node, the function automatically cleans up all previously created nodes to avoid memory leaks.

</details>

---

## 📊 Statistics

<div align="center">

| Metric | Value |
|:------:|:-----:|
| **Functions** | 42 |
| **Files .c** | 43 |
| **Lines** | ~2000+ |
| **Bonus** | ✅ Complete |

</div>

---

## 🚨 Disclaimer

**🇬🇧 This project has an educational purpose and you should under no circumstances copy and paste.**
**Cheat is bad. Don't cheat.**

**🇫🇷 Ce projet a un but éducatif et vous ne devez en aucun cas faire du copier-coller.**
**Tricher c'est mal. Ne trichez pas.**

---

<div align="center">

**Made with ❤️ for 42 Bangkok**

[![Back to top](https://img.shields.io/badge/⬆-Back_to_top-red?style=for-the-badge)](#libft---my-first-c-library)

</div>
