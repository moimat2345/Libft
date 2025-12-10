<div align="center">

# 📚 Libft - Ma Première Bibliothèque C

![42 Bangkok](https://img.shields.io/badge/42-Bangkok-000000?style=for-the-badge&logo=42&logoColor=white)
![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Norminette](https://img.shields.io/badge/Norminette-passing-success?style=for-the-badge)
![Functions](https://img.shields.io/badge/Functions-42-blueviolet?style=for-the-badge)

[![English](https://img.shields.io/badge/🇬🇧_English-Click_here-red?style=for-the-badge)](README.en.md)

</div>

---

## 📝 Vue d'ensemble

<table>
<tr>
<td>

**Libft** est le premier projet du cursus 42. J'ai recodé **42 fonctions** de la bibliothèque standard C, organisées en 3 parties :

- ✅ **22 fonctions** de la libc (Partie 1)
- ✅ **11 fonctions** utilitaires (Partie 2)
- ✅ **9 fonctions** bonus pour listes chaînées

Compilation stricte avec `-Wall -Wextra -Werror` ✨

</td>
<td width="300">

```
📊 Statistiques

Fichiers:     43 .c
Fonctions:    42
Lignes:       ~2000+
Tests:        Inclus
Bonus:        ✓ Complet
```

</td>
</tr>
</table>

---

## 📂 Structure du Projet

```
Libft/
├── 📄 Makefile              # Compilation
│
├── 📁 include/              # Headers
│   └── libft.h              # Prototypes de toutes les fonctions
│
└── 📁 src/                  # Sources (42 fonctions)
    │
    ├── 🔵 PARTIE 1 : Fonctions libc (22 fonctions)
    │   ├── ft_atoi.c        ├── ft_isalpha.c     ├── ft_isdigit.c
    │   ├── ft_isalnum.c     ├── ft_isascii.c     ├── ft_isprint.c
    │   ├── ft_tolower.c     ├── ft_toupper.c     ├── ft_bzero.c
    │   ├── ft_memset.c      ├── ft_memcpy.c      ├── ft_memmove.c
    │   ├── ft_memchr.c      ├── ft_memcmp.c      ├── ft_strlen.c
    │   ├── ft_strchr.c      ├── ft_strrchr.c     ├── ft_strncmp.c
    │   ├── ft_strnstr.c     ├── ft_strlcpy.c     ├── ft_strlcat.c
    │   ├── ft_strdup.c      └── ft_calloc.c
    │
    ├── 🟢 PARTIE 2 : Fonctions utilitaires (11 fonctions)
    │   ├── ft_substr.c      ├── ft_strjoin.c     ├── ft_strtrim.c
    │   ├── ft_split.c       ├── ft_itoa.c        ├── ft_strmapi.c
    │   ├── ft_striteri.c    ├── ft_putchar_fd.c  ├── ft_putstr_fd.c
    │   ├── ft_putendl_fd.c  └── ft_putnbr_fd.c
    │
    └── 🟡 BONUS : Listes chaînées (9 fonctions)
        ├── ft_lstnew.c      ├── ft_lstadd_front.c ├── ft_lstadd_back.c
        ├── ft_lstsize.c     ├── ft_lstlast.c      ├── ft_lstdelone.c
        ├── ft_lstclear.c    ├── ft_lstiter.c      └── ft_lstmap.c
```

---

## 🎯 Fonctions Implémentées

<details>
<summary><b>🔵 PARTIE 1 : Fonctions libc (22 fonctions)</b></summary>

### Tests & Conversions
| Fonction | Description | Prototype |
|----------|-------------|-----------|
| ![](https://img.shields.io/badge/-ft__atoi-blue) | String → Int | `int ft_atoi(const char *nptr)` |
| ![](https://img.shields.io/badge/-ft__isalpha-blue) | Test alphabétique | `int ft_isalpha(int c)` |
| ![](https://img.shields.io/badge/-ft__isdigit-blue) | Test chiffre | `int ft_isdigit(int c)` |
| ![](https://img.shields.io/badge/-ft__isalnum-blue) | Test alphanumérique | `int ft_isalnum(int c)` |
| ![](https://img.shields.io/badge/-ft__isascii-blue) | Test ASCII | `int ft_isascii(int c)` |
| ![](https://img.shields.io/badge/-ft__isprint-blue) | Test imprimable | `int ft_isprint(int c)` |
| ![](https://img.shields.io/badge/-ft__tolower-blue) | Minuscule | `int ft_tolower(int c)` |
| ![](https://img.shields.io/badge/-ft__toupper-blue) | Majuscule | `int ft_toupper(int c)` |

### Manipulation Mémoire
| Fonction | Description | Prototype |
|----------|-------------|-----------|
| ![](https://img.shields.io/badge/-ft__bzero-blue) | Mise à zéro | `void ft_bzero(void *s, size_t n)` |
| ![](https://img.shields.io/badge/-ft__memset-blue) | Remplissage | `void *ft_memset(void *s, int c, size_t n)` |
| ![](https://img.shields.io/badge/-ft__memcpy-blue) | Copie | `void *ft_memcpy(void *dest, const void *src, size_t n)` |
| ![](https://img.shields.io/badge/-ft__memmove-blue) | Copie overlap-safe ⭐ | `void *ft_memmove(void *dest, const void *src, size_t n)` |
| ![](https://img.shields.io/badge/-ft__memchr-blue) | Recherche octet | `void *ft_memchr(const void *s, int c, size_t n)` |
| ![](https://img.shields.io/badge/-ft__memcmp-blue) | Comparaison | `int ft_memcmp(const void *s1, const void *s2, size_t n)` |

### Manipulation Strings
| Fonction | Description | Prototype |
|----------|-------------|-----------|
| ![](https://img.shields.io/badge/-ft__strlen-blue) | Longueur | `size_t ft_strlen(const char *s)` |
| ![](https://img.shields.io/badge/-ft__strchr-blue) | Recherche char | `char *ft_strchr(const char *s, int c)` |
| ![](https://img.shields.io/badge/-ft__strrchr-blue) | Recherche (fin) | `char *ft_strrchr(const char *s, int c)` |
| ![](https://img.shields.io/badge/-ft__strncmp-blue) | Comparaison n | `int ft_strncmp(const char *s1, const char *s2, size_t n)` |
| ![](https://img.shields.io/badge/-ft__strnstr-blue) | Recherche substring | `char *ft_strnstr(const char *big, const char *little, size_t len)` |
| ![](https://img.shields.io/badge/-ft__strlcpy-blue) | Copie sécurisée | `size_t ft_strlcpy(char *dst, const char *src, size_t size)` |
| ![](https://img.shields.io/badge/-ft__strlcat-blue) | Concat sécurisée | `size_t ft_strlcat(char *dst, const char *src, size_t size)` |
| ![](https://img.shields.io/badge/-ft__strdup-blue) | Duplication | `char *ft_strdup(const char *s)` |
| ![](https://img.shields.io/badge/-ft__calloc-blue) | Allocation+init ⭐ | `void *ft_calloc(size_t nmemb, size_t size)` |

</details>

<details>
<summary><b>🟢 PARTIE 2 : Fonctions utilitaires (11 fonctions)</b></summary>

### Allocation & Manipulation Strings
| Fonction | Description | Prototype |
|----------|-------------|-----------|
| ![](https://img.shields.io/badge/-ft__substr-green) | Extrait substring ⭐ | `char *ft_substr(char const *s, unsigned int start, size_t len)` |
| ![](https://img.shields.io/badge/-ft__strjoin-green) | Concatène 2 strings | `char *ft_strjoin(char const *s1, char const *s2)` |
| ![](https://img.shields.io/badge/-ft__strtrim-green) | Trim caractères ⭐ | `char *ft_strtrim(char const *s1, char const *set)` |
| ![](https://img.shields.io/badge/-ft__split-green) | Split par délimiteur ⭐ | `char **ft_split(char const *s, char c)` |
| ![](https://img.shields.io/badge/-ft__itoa-green) | Int → String ⭐ | `char *ft_itoa(int n)` |

### Map & Iteration
| Fonction | Description | Prototype |
|----------|-------------|-----------|
| ![](https://img.shields.io/badge/-ft__strmapi-green) | Map fonction sur string | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` |
| ![](https://img.shields.io/badge/-ft__striteri-green) | Itère avec fonction | `void ft_striteri(char *s, void (*f)(unsigned int, char*))` |

### Output File Descriptor
| Fonction | Description | Prototype |
|----------|-------------|-----------|
| ![](https://img.shields.io/badge/-ft__putchar__fd-green) | Output char | `void ft_putchar_fd(char c, int fd)` |
| ![](https://img.shields.io/badge/-ft__putstr__fd-green) | Output string | `void ft_putstr_fd(char *s, int fd)` |
| ![](https://img.shields.io/badge/-ft__putendl__fd-green) | Output string+\\n | `void ft_putendl_fd(char *s, int fd)` |
| ![](https://img.shields.io/badge/-ft__putnbr__fd-green) | Output int (récursif) ⭐ | `void ft_putnbr_fd(int n, int fd)` |

</details>

<details>
<summary><b>🟡 BONUS : Listes chaînées (9 fonctions)</b></summary>

### Structure
```c
typedef struct s_list {
    void            *content;
    struct s_list   *next;
} t_list;
```

### Fonctions
| Fonction | Description | Prototype |
|----------|-------------|-----------|
| ![](https://img.shields.io/badge/-ft__lstnew-yellow) | Création noeud | `t_list *ft_lstnew(void *content)` |
| ![](https://img.shields.io/badge/-ft__lstadd__front-yellow) | Ajout début | `void ft_lstadd_front(t_list **lst, t_list *new)` |
| ![](https://img.shields.io/badge/-ft__lstadd__back-yellow) | Ajout fin | `void ft_lstadd_back(t_list **lst, t_list *new)` |
| ![](https://img.shields.io/badge/-ft__lstsize-yellow) | Taille liste | `int ft_lstsize(t_list *lst)` |
| ![](https://img.shields.io/badge/-ft__lstlast-yellow) | Dernier noeud | `t_list *ft_lstlast(t_list *lst)` |
| ![](https://img.shields.io/badge/-ft__lstdelone-yellow) | Suppression 1 noeud | `void ft_lstdelone(t_list *lst, void (*del)(void*))` |
| ![](https://img.shields.io/badge/-ft__lstclear-yellow) | Vidage liste | `void ft_lstclear(t_list **lst, void (*del)(void*))` |
| ![](https://img.shields.io/badge/-ft__lstiter-yellow) | Itération | `void ft_lstiter(t_list *lst, void (*f)(void *))` |
| ![](https://img.shields.io/badge/-ft__lstmap-yellow) | Map sur liste ⭐ | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` |

</details>

> ⭐ = Implémentation avec particularités notables (voir section suivante)

---

## ⚙️ Particularités d'Implémentation

<table>
<tr>
<td>

**🔹 ft_memmove - Overlap-Safe**

Copie correctement même si les zones mémoire se chevauchent :
```c
if (dest > src)
    // Copie de la fin vers le début
else
    // Copie du début vers la fin
```

</td>
<td>

**🔹 ft_split - Gestion d'erreurs**

3 fonctions internes + `free_tab()` :
```c
count_word()
when_next_sep()
add_in_tab()  // + gestion malloc
```

</td>
</tr>

<tr>
<td>

**🔹 ft_itoa - Long pour négatifs**

Utilise `long` pour gérer INT_MIN :
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

**🔹 ft_substr - Sécurisé**

- Vérifie start >= len → string vide
- Limite len à la longueur disponible

</td>
</tr>

<tr>
<td>

**🔹 ft_strtrim - Set personnalisé**

Supprime un SET de caractères :
```c
in_set()  // Vérifie char dans set
```

</td>
<td>

**🔹 ft_putnbr_fd - Récursif**

Approche récursive élégante :
```c
if (n >= 10)
    ft_putnbr_fd(n / 10, fd);
ft_putchar_fd(n % 10 + '0', fd);
```

</td>
</tr>

<tr>
<td>

**🔹 ft_lstmap - Nettoyage auto**

Si création échoue, nettoie :
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

Cast en `long` :
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
# Compiler la bibliothèque
make

# Compiler avec bonus (listes chaînées)
make bonus

# Nettoyer les fichiers objets
make clean

# Nettoyer tout (objets + libft.a)
make fclean

# Recompiler complètement
make re
```

**Règles du Makefile :**
```makefile
CC = cc
FLAG = -Wall -Wextra -Werror
NAMELIB = libft.a

# Pattern rule
.c.o:
    ${CC} ${FLAG} -c $< -o $@

# Archive statique
${NAMELIB}: ${OBJ}
    ar rcs ${NAMELIB} ${OBJ}
```

---

## 💻 Utilisation

```c
#include "libft.h"

int main(void)
{
    // Utiliser ft_split
    char **tab = ft_split("Hello World 42", ' ');
    for (int i = 0; tab[i]; i++)
        ft_putendl_fd(tab[i], 1);

    // Utiliser ft_itoa
    char *nbr = ft_itoa(42);
    ft_putstr_fd("Number: ", 1);
    ft_putendl_fd(nbr, 1);
    free(nbr);

    // Utiliser les listes chaînées
    t_list *lst = ft_lstnew(ft_strdup("Node 1"));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Node 2")));
    ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Node 3")));

    ft_lstiter(lst, print_content);  // Fonction custom

    return (0);
}
```

**Compiler avec libft :**
```bash
gcc main.c -L. -lft -o program
./program
```

---

## ✅ Tests & Validation

```bash
# Test inclus dans test.c
./test.c  # Test ft_putchar_fd('H', 1)

# Tester avec Tripouille
git clone https://github.com/Tripouille/libftTester.git
cd libftTester
make

# Tester avec War Machine
git clone https://github.com/y3ll0w42/libft-war-machine.git
cd libft-war-machine
bash grademe.sh
```

---

<div align="center">

## 📊 Résumé

| Métrique | Valeur |
|:--------:|:------:|
| ![](https://img.shields.io/badge/Fonctions-42-blueviolet?style=flat-square) | ![](https://img.shields.io/badge/Partie_1-22-blue?style=flat-square) ![](https://img.shields.io/badge/Partie_2-11-green?style=flat-square) ![](https://img.shields.io/badge/Bonus-9-yellow?style=flat-square) |
| ![](https://img.shields.io/badge/Fichiers_.c-43-informational?style=flat-square) | ![](https://img.shields.io/badge/Lignes-~2000+-orange?style=flat-square) |
| ![](https://img.shields.io/badge/Norminette-✓-success?style=flat-square) | ![](https://img.shields.io/badge/Compilation-Wall_Wextra_Werror-red?style=flat-square) |

---

**Made with ❤️ for 42 Bangkok**

[![Back to top](https://img.shields.io/badge/⬆-Retour_en_haut-blue?style=for-the-badge)](#-libft---ma-première-bibliothèque-c)

</div>
