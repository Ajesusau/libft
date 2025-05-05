/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anareval <anareval@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:07:40 by anareval          #+#    #+#             */
/*   Updated: 2025/05/05 16:40:25 by anareval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// Checks if the character is an alphabetic letter.
int		ft_isalpha(int c);

// Checks if the character is a digit (0-9).
int		ft_isdigit(int c);

// Checks if the character is alphanumeric (letter or digit).
int		ft_isalnum(int c);

// Checks if the character is in the ASCII set.
int		ft_isascii(int c);

// Checks if the character is printable (including space).
int		ft_isprint(int c);

// Calculates the length of a string.
size_t	ft_strlen(const char *str);

// Fills a block of memory with a specific byte.
void	*ft_memset(void *str, int c, size_t n);

// Sets a block of memory to zero.
void	ft_bzero(void *str, size_t n);

// Copies a block of memory from src to dst.
void	*ft_memcpy(void *dst, const void *src, size_t n);

// Copies memory, handling overlapping areas safely.
void	*ft_memmove(void *dst, const void *src, size_t n);

// Copies a string with size limitation and null-termination.
size_t	ft_strlcpy(char *dst, const char *src, size_t n);

// Appends a string to another with size limitation.
size_t	ft_strlcat(char *dst, const char *src, size_t n);

// Converts a character to uppercase.
int		ft_toupper(int c);

// Converts a character to lowercase.
int		ft_tolower(int c);

// Finds the first occurrence of a character in a string.
char	*ft_strchr(const char *str, int c);

// Finds the last occurrence of a character in a string.
char	*ft_strrchr(const char *str, int c);

// Compares two strings up to n characters.
int		ft_strncmp(const char *s1, const char *s2, size_t n);

// Searches for a byte in a block of memory.
void	*ft_memchr(const void *s, int c, size_t n);

// Compares two memory blocks.
int		ft_memcmp(const void *s1, const void *s2, size_t n);

// Searches for a substring within another string with length limit.
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

// Converts a string to an integer.
int		ft_atoi(const char *str);

// Allocates zero-initialized memory.
void	*ft_calloc(size_t count, size_t size);

// Duplicates a string into newly allocated memory.
char	*ft_strdup(const char *str);

// Extracts a substring from a given position and length.
char	*ft_substr(char const *s, unsigned int start, size_t len);

// Joins two strings into a new one.
char	*ft_strjoin(const char *s1, const char *s2);

// Trims characters from the beginning and end of a string.
char	*ft_strtrim(char const *s1, char const *set);

// Converts an integer to a string.
char	*ft_itoa(int n);

// Applies a function to each character of a string (with index).
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

// Applies a function to each character of a string (modifying it).
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

// Writes a character to a file descriptor.
void	ft_putchar_fd(char c, int fd);

// Writes a string to a file descriptor.
void	ft_putstr_fd(char *s, int fd);

// Writes a string with newline to a file descriptor.
void	ft_putendl_fd(char *s, int fd);

// Writes a number to a file descriptor.
void	ft_putnbr_fd(int n, int fd);

// Splits a string using a delimiter and returns an array of strings.
char	**ft_split(char const *s, char c);

// Creates a new linked list node.
t_list	*ft_lstnew(void *content);

// Adds a node to the beginning of the list.
void	ft_lstadd_front(t_list **lst, t_list *new);

// Counts the number of nodes in the list.
int		ft_lstsize(t_list *lst);

// Returns the last node of the list.
t_list	*ft_lstlast(t_list *lst);

// Adds a node to the end of the list.
void	ft_lstadd_back(t_list **lst, t_list *new);

// Deletes a node using a deletion function.
void	ft_lstdelone(t_list *lst, void (*del)(void*));

// Frees the entire list using a deletion function.
void	ft_lstclear(t_list **lst, void (*del)(void*));

// Applies a function to each node in the list.
void	ft_lstiter(t_list *lst, void (*f)(void *));

// Creates a new list by applying a function to each node.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
