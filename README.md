# 42-Cursus
## [Libft - Biblioteca de funciones](https://github.com/AnaLR27/42-Cursus/tree/main/Libft)

El proyecto Libft tiene como objetivo principal desarrollar una biblioteca de funciones en C, que proporcionará implementaciones de varias funciones de la biblioteca estándar de C, así como otras funciones adicionales que pueden ser útiles en el desarrollo de proyectos futuros.

La biblioteca Libft será utilizada como una base sólida para proyectos posteriores en el programa de formación y proporcionará una serie de funciones esenciales para el manejo de cadenas de caracteres, memoria, listas enlazadas y más.

### Funciones incluidas
La biblioteca Libft contendrá las siguientes categorías principales de funciones:

- **Manipulación de cadenas de caracteres**: Funciones para la manipulación, búsqueda y comparación de cadenas de caracteres, así como la conversión de cadenas numéricas.

- **Gestión de memoria**: Funciones para la asignación y liberación de memoria, así como operaciones de copia y concatenación de memoria.

- **Listas enlazadas**: Funciones para crear, manipular y recorrer listas enlazadas.

- **Caracteres**: Funciones para comprobar y transformar caracteres.

- **Conversión**: Funciones para convertir números entre diferentes bases.

- **Entrada y salida**: Funciones para leer y escribir en la consola.

• [isalpha](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_isalpha.c)
• [isdigit](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_isdigit.c)
• [isalnum](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_isalnum.c)
• [isascii](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_isascii.c)
• [isprint](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_isprint.c)
• [strlen](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_strlen.c)
• [memset](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_memset.c)
• [bzero](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_bzero.c)
• [memcpy](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_memcpy.c)
• [memmove](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_memmove.c)
• [strlcpy](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_strlcpy.c)
• [strlcat](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_strlcat.c)
• [toupper](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_toupper.c)
• [tolower](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_tolower.c)
• [strchr](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_strchr.c)
• [strrchr](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_strrchr.c)
• [strncmp](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_strncmp.c)
• [memchr](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_memchr.c)
• [memcmp](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_memcmp.c)
• [strnstr](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_strnstr.c)
• [atoi](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_atoi.c)
• [calloc](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_calloc.c)
• [strdup](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_strdup.c)
• [ft_substr](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_substr.c)
• [ft_strjoin](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_strjoin.c)
• [ft_strtrim](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_strtrim.c)
• [ft_split](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_split.c)
• [ft_itoa](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_itoa.c)
• [ft_strmapi](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_strmapi.c)
• [ft_striteri](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_striteri.c)
• [ft_putchar_fd](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_putchar_fd.c)
• [ft_putstr_fd](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_putstr_fd.c)
• [ft_putendl_fd](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_putendl_fd.c)
• [ft_putnbr_fd](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_putnbr_fd.c)

## Bonus part
La regla bonus cerada en el Makefile permite compilar las funciones creadas a continuación pasra manipular listas. La definición de la estructura es la siguiente:
```
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
```



• [ft_lstnew](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_lstnew_bonus.c)
• [ft_lstadd_front](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_lstadd_front_bonus.c)
• [ft_lstsize](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_lstsize_bonus.c)
• [ft_lstlast](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_lstlast_bonus.c)
• [ft_lstadd_back](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_lstadd_back_bonus.c)
• [ft_lstdelone](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_lstdelone_bonus.c)
• [ft_lstclear](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_lstclear_bonus.c)
• [ft_lstiter](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_lstiter_bonus.c)
• [ft_lstmap](https://github.com/AnaLR27/42-Cursus/blob/main/Libft/ft_lstmap_bonus.c)
