/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: DiegoDemarco <DiegoDemarco@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:18:19 by ddemarco          #+#    #+#             */
/*   Updated: 2022/04/22 18:35:13 by DiegoDemarc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# ifndef S_LIST
#  define S_LIST
/*content = value within list
next = next value of the list. NULL if non existant*/
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
# endif

/*Checks if a char in ASCII is between 'A' and 'z'.
TRUE: Returns ASCII. FALSE: Returns 0.*/
int				ft_isalpha(int num);
/*Checks if a char in ASCII is between '1' and '9'.
TRUE: Returns ASCII. FALSE: Returns 0.*/
int				ft_isdigit(int num);
/*Checks if a char in ASCII is Alphanumeric.
TRUE: Returns ASCII. FALSE: Returns 0*/
int				ft_isalnum(int num);
/*Checks if a char in ASCII.
TRUE: Returns ASCII. FALSE: Returns 0.*/
int				ft_isascii(int num);
/*Checks if a char is printable.
TRUE: Returns ASCII. FALSE: Returns 0.*/
int				ft_isprint(int num);
/*Returns length of a string.*/
size_t			ft_strlen(const char *str);
/*Copies value 'c' into the first 'n' chars of 'ptr'.*/
/*Returns ptr.*/
void			*ft_memset(void *ptr, int c, size_t n);
/*Errases data (by putting \0) starting at i = 0 during 'n' values*/
void			ft_bzero(void *ptr, size_t n);
/*Copies n areas of memory from src to dest.
Returns dest*/
void			*ft_memcpy(void *dest, const void *src, size_t n);
/*Copies n areas of memory from src to dest.
Avoids overlaps, safer than memcpy*/
void			*ft_memmove(void *dest, const void *src, size_t n);
/*Copies from 'src 'to 'dest' for size terminating in NULL.
Return size of string it tried to create AKA len(src).*/
size_t			ft_strlcpy(char *dest, const char *src, size_t destsize);
/*Copy from src to dest until size - 1 and ends NULL if a byte is free in dest
Return size of string it tried to create AKA len(src)*/
size_t			ft_strlcat(char *dest, const char *src, size_t destsize);
/*Gets number of digits^*/
int				ft_num_len(int num);
/*IF char is lowercase returns upper IF NOT returns itself*/
int				ft_toupper(int ch);
/*IF char is uppercase returns lowercase IF NOT returns itself*/
int				ft_tolower(int ch);
/*Searches first ocurrance c and returns a pointer to that char
NULL if not found*/
char			*ft_strchr(const char *str, int c);
/*Searches last ocurrance c and returns a pointer to that char
NULL if not found*/
char			*ft_strrchr(const char *str, int c);
/*Compares the most n bytes of two strings
IF val < 0 str1 less than str2
IF val > 0 str1 more than str2
IF val = 0 they are equal*/
int				ft_strncmp(const char *str1, const char *str2, size_t n);
/*Searches for the first occurrence of c in the first n bytes*/
/*Returns a pointer to the matching byte*/
void			*ft_memchr(const void *str, int c, size_t n);
/*Compares the first n bytes of memory area str1 and memory area str2
IF val < 0 str1 less than str2
IF val > 0 str1 more than str2
IF val = 0 they are equal*/
int				ft_memcmp(const void *str1, const void *str2, size_t n);
/*Locates the first occurrence of 'little' in 'big' within 'n' characters
IF 'little' empty returns big 
IF 'little' not occurs in big, return NULL 
IF 'little' occurs in big, return pointer to occurance */
char			*ft_strnstr(const char *haystack, const char *needle, size_t n);
/*Converts the string argument 'str' to an integer*/
int				ft_atoi(const char *str);
/*Allocates memory and sets it to 0
Returns pointer to allocated memory*/
void			*ft_calloc(size_t slots, size_t size);
/*Allocates space for a new string, setting size same as original
Copies original string unto new allocated space, including NULL \0
IF memory allocated returns ptr to string ELSE returns NULL*/
char			*ft_strdup(const char *src);
/*Allocates memory and returns new str based on s
New string starts at index 'start' and has max size of len*/
char			*ft_substr(char const *s, unsigned int start, size_t len);
/*Allocates memory for a str based on s1 and s2
Returns NULL if memory allocation is not possible*/
char			*ft_strjoin(char const *s1, char const *s2);
/*Allocates memory.
Returns a copy of src with characters 'set' deleted from beginning and end*/
char			*ft_strtrim(char const *src, char const *set);
/*Allocates memory
Splits char* 's' on each instance of 'c'
Returns a char* with all delimitations, ending it with NULL */
char			**ft_split(char const *s, char c);
/*Allocates memory
Converts int to char**/
char			*ft_itoa(int n);
/*Applies function 'f' to every char of 's' to create new char* 
Allocates memory. Uses f(index, s[index])
To pass function use name without parnthesis*/
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/*Passes each char of 's' through 'f', starting at it's index*/
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
/*Writes 'c' to selected file descriptor (fd) */
void			ft_putchar_fd(char c, int fd);
/*Writes 'str' to selected file descriptor (fd) */
void			ft_putstr_fd(char *s, int fd);
/*Writes 'str' to selected file descriptor (fd)
Follows 'str' by endl */
void			ft_putendl_fd(char *s, int fd);
/*Writes int to selected file descriptor (fd) */
void			ft_putnbr_fd(int n, int fd);
/*Allocates memory and Returns new list
It inits 'context' with value content and 'next' as NULL*/
t_list			*ft_lstnew(void *content);
/*Adds no to the beggening (0) of lst
lst = pointer to first element of a list
new = pointer to the element to add*/
void			ft_lstadd_front(t_list **lst, t_list *new);
/*Counts the number of elements in a list
lst = first element of a list*/
int				ft_lstsize(t_list *lst);
/*Returns the last element of a list */
t_list			*ft_lstlast(t_list *lst);
/*Adds element 'new' to the end of a list*/
void			ft_lstadd_back(t_list **lst, t_list *new);
/*Deletes an element and liberates memory utillizing function 'del'*/
void			ft_lstdelone(t_list *lst, void (*del)(void *));
/*Deletes and free every element of the list with 'del'
Pointer to list is set to NULL*/
void			ft_lstclear(t_list **lst, void (*del)(void*));
/*Iterates through lst and applies f to each element*/
void			ft_lstiter(t_list *lst, void (*f)(void *));
/*Iterates through lst and applies f to each element.
f generates a new list with these elements.
Uses del to delete any elements*/
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));
#endif
