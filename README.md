# 📚 libft

**libft** es una biblioteca de funciones en C desarrollada como parte del plan de estudios de [42 School](https://42.fr). El objetivo de este proyecto es replicar funciones estándar de la libc y desarrollar nuevas funciones útiles para trabajar con memoria, cadenas de texto y listas enlazadas.

## 🧠 Objetivos del Proyecto

- Reimplementar funciones estándar de la biblioteca C (como `memset`, `strlen`, `strcpy`, etc.).
- Entender a bajo nivel cómo funcionan operaciones básicas con memoria y cadenas.
- Desarrollar funciones auxiliares personalizadas.
- Aprender buenas prácticas de codificación y estructuración de proyectos en C.
- Introducción al desarrollo de una biblioteca reutilizable.

## 📁 Estructura del Proyecto
```
  libft/
  ├── ft_.c # Implementaciones de funciones
  ├── libft.h # Cabecera principal de la librería
  ├── Makefile # Compilador y reglas de construcción
  └── README.md # Documentación del proyecto
```
## ✅ Funciones Implementadas

### Parte 1: Funciones de la libc

- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_strlen`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`
- `ft_atoi`
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`
- `ft_calloc`
- `ft_strdup`

### Parte 2: Funciones adicionales

- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### Bonus: Listas enlazadas

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

## 🛠️ Compilación

Para compilar la biblioteca, simplemente ejecuta:
```
make
```
Esto generará un archivo libft.a que puedes incluir en otros proyectos.

Para limpiar archivos objeto:
```
make clean
```
Para limpiar todo, incluyendo libft.a:
```
make fclean
```
Para limpiar y recompilar:
```
make re
```
📌 Uso
Incluye libft.a en tu proyecto y el archivo libft.h en tus archivos fuente:
```
#include "libft.h"
```
Luego compila con el archivo de librería:
```
cc main.c libft.a
```
