<div align="center">
  <img src="https://raw.githubusercontent.com/ayogun/42-project-badges/main/covers/cover-libft-bonus.png" alt="libft" />
</div>

# Libft - Ma Première Bibliothèque C

Le projet `Libft` est le premier projet du cursus 42. Il consiste à recoder **42 fonctions** de la bibliothèque standard C, organisées en 3 parties : fonctions libc, fonctions utilitaires et fonctions bonus pour listes chaînées.

## Statut
<div align="center">

![42 Bangkok](https://img.shields.io/badge/42-Bangkok-000000?style=for-the-badge&logo=42&logoColor=white)
![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Norminette](https://img.shields.io/badge/Norminette-passing-success?style=for-the-badge)

<br>

### 🌍 Language / Langue

[![English](https://img.shields.io/badge/🇬🇧_Read_in_English-red?style=for-the-badge&logoColor=white)](README.md)

</div>

---

## Vue d'ensemble

**Libft** permet de créer sa propre bibliothèque de fonctions C réutilisables pour tous les projets futurs du cursus 42. Ce projet renforce la compréhension des structures de données et des algorithmes de base.

### Ce que j'ai implémenté :
- ✅ **22 fonctions** de la libc (Partie 1)
- ✅ **11 fonctions** utilitaires (Partie 2)
- ✅ **9 fonctions** bonus pour listes chaînées

---

## 📋 Partie Obligatoire

<table>
  <tr>
    <th>Nom du programme</th>
    <td>libft.a</td>
  </tr>
  <tr>
    <th>Fichiers à rendre</th>
    <td>Makefile, libft.h, *.c</td>
  </tr>
  <tr>
    <th>Makefile</th>
    <td>all, clean, fclean, re, bonus</td>
  </tr>
  <tr>
    <th>Fonctions externes</th>
    <td>malloc, free, write</td>
  </tr>
  <tr>
    <th>Description</th>
    <td>Coder une bibliothèque de fonctions C utiles pour les projets 42</td>
  </tr>
</table>

### Règles importantes
- Les variables globales sont interdites.
- Compilation avec les flags `-Wall -Wextra -Werror`.
- Pas de segfault, bus error, double free, etc.
- Utiliser `ar` pour créer la bibliothèque statique.

---

## 📂 Structure du Projet

```
Libft/
├── 📄 Makefile              # Compilation → libft.a
│
├── 📁 include/              # Headers
│   └── libft.h              # Prototypes de toutes les fonctions
│
└── 📁 src/                  # Sources (42 fonctions)
    ├── Partie 1 (22 fonctions libc)
    ├── Partie 2 (11 fonctions utilitaires)
    └── Bonus (9 fonctions listes chaînées)
```

---

## 🎯 Fonctions Implémentées

### Partie 1 : Fonctions libc (22 fonctions)

<details>
<summary><b>Cliquez pour voir les fonctions</b></summary>

#### Tests & Conversions
- `ft_atoi` - Convertit une chaîne en entier
- `ft_isalpha` - Teste si c'est un caractère alphabétique
- `ft_isdigit` - Teste si c'est un chiffre
- `ft_isalnum` - Teste si c'est alphanumérique
- `ft_isascii` - Teste si c'est un caractère ASCII
- `ft_isprint` - Teste si c'est un caractère imprimable
- `ft_tolower` - Convertit en minuscule
- `ft_toupper` - Convertit en majuscule

#### Manipulation Mémoire
- `ft_bzero` - Met une zone mémoire à zéro
- `ft_memset` - Remplit une zone mémoire
- `ft_memcpy` - Copie une zone mémoire
- `ft_memmove` - Copie mémoire (overlap-safe)
- `ft_memchr` - Recherche un octet en mémoire
- `ft_memcmp` - Compare deux zones mémoires

#### Manipulation Strings
- `ft_strlen` - Calcule la longueur d'une chaîne
- `ft_strchr` - Recherche un caractère dans une chaîne
- `ft_strrchr` - Recherche un caractère (depuis la fin)
- `ft_strncmp` - Compare n caractères de deux chaînes
- `ft_strnstr` - Recherche une sous-chaîne
- `ft_strlcpy` - Copie sécurisée de chaîne
- `ft_strlcat` - Concaténation sécurisée
- `ft_strdup` - Duplique une chaîne
- `ft_calloc` - Allocation mémoire initialisée à 0

</details>

### Partie 2 : Fonctions utilitaires (11 fonctions)

<details>
<summary><b>Cliquez pour voir les fonctions</b></summary>

#### Allocation & Manipulation Strings
- `ft_substr` - Extrait une sous-chaîne
- `ft_strjoin` - Concatène deux chaînes
- `ft_strtrim` - Supprime des caractères en début/fin
- `ft_split` - Découpe une chaîne selon un délimiteur
- `ft_itoa` - Convertit un int en string

#### Map & Iteration
- `ft_strmapi` - Applique une fonction sur chaque caractère
- `ft_striteri` - Itère sur une chaîne avec une fonction

#### Output File Descriptor
- `ft_putchar_fd` - Affiche un caractère sur un fd
- `ft_putstr_fd` - Affiche une chaîne sur un fd
- `ft_putendl_fd` - Affiche une chaîne + newline sur un fd
- `ft_putnbr_fd` - Affiche un int sur un fd

</details>

### Bonus : Listes chaînées (9 fonctions)

<details>
<summary><b>Cliquez pour voir les fonctions</b></summary>

#### Structure
```c
typedef struct s_list {
    void            *content;
    struct s_list   *next;
} t_list;
```

#### Fonctions
- `ft_lstnew` - Crée un nouveau nœud
- `ft_lstadd_front` - Ajoute un nœud au début
- `ft_lstadd_back` - Ajoute un nœud à la fin
- `ft_lstsize` - Compte le nombre de nœuds
- `ft_lstlast` - Retourne le dernier nœud
- `ft_lstdelone` - Supprime un nœud
- `ft_lstclear` - Supprime toute la liste
- `ft_lstiter` - Itère sur la liste
- `ft_lstmap` - Applique une fonction et crée une nouvelle liste

</details>

---

## 🛠️ Compilation et Utilisation

### Compiler la bibliothèque

```bash
# Compiler la partie obligatoire
make

# Compiler avec les bonus
make bonus

# Nettoyer les fichiers objets
make clean

# Tout nettoyer
make fclean

# Recompiler complètement
make re
```

### Utiliser dans votre code

```c
#include "libft.h"

int main(void)
{
    // Utiliser ft_split
    char **words = ft_split("Hello World 42", ' ');
    for (int i = 0; words[i]; i++)
        ft_putendl_fd(words[i], 1);

    // Utiliser ft_itoa
    char *number = ft_itoa(42);
    ft_putstr_fd("Number: ", 1);
    ft_putendl_fd(number, 1);
    free(number);

    // Utiliser les listes chaînées
    t_list *list = ft_lstnew(ft_strdup("Node 1"));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("Node 2")));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("Node 3")));

    return (0);
}
```

### Compiler avec libft

```bash
gcc main.c -L. -lft -I./include -o program
./program
```

---

## 💡 Points Clés de l'Implémentation

<details>
<summary><b>🔹 ft_split - Gestion d'erreurs robuste</b></summary>

La fonction `ft_split` utilise plusieurs fonctions internes pour découper une chaîne :
- `count_word()` - Compte le nombre de mots
- `when_next_sep()` - Trouve le prochain séparateur
- `add_in_tab()` - Ajoute le mot dans le tableau avec gestion malloc

En cas d'échec d'allocation, toute la mémoire déjà allouée est libérée.

</details>

<details>
<summary><b>🔹 ft_memmove - Overlap-Safe</b></summary>

Gère correctement les zones mémoire qui se chevauchent :
```c
if (dest > src)
    // Copie de la fin vers le début
else
    // Copie du début vers la fin
```

</details>

<details>
<summary><b>🔹 ft_lstmap - Nettoyage automatique</b></summary>

En cas d'échec lors de la création d'un nouveau nœud, la fonction nettoie automatiquement tous les nœuds déjà créés pour éviter les fuites mémoire.

</details>

---

## 📊 Statistiques

<div align="center">

| Métrique | Valeur |
|:--------:|:------:|
| **Fonctions** | 42 |
| **Fichiers .c** | 43 |
| **Lignes** | ~2000+ |
| **Bonus** | ✅ Complet |

</div>

---

## 🚨 Avertissement

**🇫🇷 Ce projet a un but éducatif et vous ne devez en aucun cas faire du copier-coller.**
**Tricher c'est mal. Ne trichez pas.**

**🇬🇧 This project has an educational purpose and you should under no circumstances copy and paste.**
**Cheat is bad. Don't cheat.**

---

<div align="center">

**Made with ❤️ for 42 Bangkok**

[![Back to top](https://img.shields.io/badge/⬆-Retour_en_haut-blue?style=for-the-badge)](#libft---ma-première-bibliothèque-c)

</div>
