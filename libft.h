/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:46:03 by lduplain          #+#    #+#             */
/*   Updated: 2020/11/26 08:12:08 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <errno.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

/*
**	Fill a byte string with a byte value.
**	./ft_memset.c
*/
void			*ft_memset(void *b, int c, size_t len);

/*
**	Fill memory with zero.
**	./ft_bzero.c
*/
void			ft_bzero(void *s, size_t n);

/*
**	Copies n bytes from memory area src to memory area dst.
**	./ft_memcpy.c
*/
void			*ft_memcpy(void *dst, const void *src, size_t n);

/*
**	Copies bytes from string src to string dst.
**	If the character c (as converted to an unsigned char)
**	occurs in the string src, the copy stops and a
**	pointer to the byte after the copy of c in the string dst is returned.
**	./ft_memccpy.c
*/
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);

/*
**	Copies len bytes from string src to string dst.
**	./ft_memmove.c
*/
void			*ft_memmove(void *dst, const void *src, size_t len);

/*
**	Locates the first occurrence of c (cast unsigned char) in string s.
**	./ft_memchr.c
*/
void			*ft_memchr(const void *s, int c, size_t n);

/*
**	Compares byte string s1 against byte string s2.
**	Both strings are assumed to be n bytes long.
**	./ft_memcmp.c
*/
int				ft_memcmp(const void *s1, const void *s2, size_t n);

/*
**	Get the length of a string.
**	./ft_strlen.c
*/
size_t			ft_strlen(const char *s);

/*
**	Check if char c is alphabetic.
**	./ft_isalpha.c
*/
int				ft_isalpha(int c);

/*
**	Check if char c is numeric.
**	./ft_isdigit.c
*/
int				ft_isdigit(int c);

/*
**	Check if char c is alphabetic or numeric.
**	/ft_isalnum.c
*/
int				ft_isalnum(int c);

/*
**	Check if char c is ascii.
**	./ft_isascii.c
*/
int				ft_isascii(int c);

/*
**	Check if char c is printable.
**	./ft_isprint.c
*/
int				ft_isprint(int c);

/*
**	Convert lowercase char to uppercase char.
**	./ft_toupper.c
**	Return uppercase ascii decimal char value if possible
**	or c if conversion was not possible.
*/
int				ft_toupper(int c);

/*
**	Convert uppercase char to lowercase char.
**	./ft_tolower.c
**	Return lowercase ascii decimal char value if possible
**	or c if conversion was not possible.
*/
int				ft_tolower(int c);

/*
**	Truncate string s from first occurence of c in string.
**	./ft_strchr.c
**	Return truncated string if occurence found.
**	Return 0 if no occurence found.
*/
char			*ft_strchr(const char *s, int c);

/*
**	Truncate string s from last occurence of c in string.
**	./ft_strrchr.c
**	Return truncated string if occurence found.
**	Return 0 if no occurence found.
*/
char			*ft_strrchr(const char *s, int c);

/*
**	Compare n characters in both strings.
**	./ft_strncmp.c
*/
int				ft_strncmp(const char *s1, const char *s2, size_t n);

/*
**	Look at the man.
**	./ft_strlcpy.c
*/
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);

/*
**	Copy and concatenate strings.
**	./ft_strlcat.c
*/
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);

/*
**	Locates the first occurrence of the null-terminated string needle
**	in the string haystack,
**	where not more than len characters are searched.
**	./ft_strnstr.c
*/
char			*ft_strnstr(const char *haystack,
							const char *needle,
							size_t len);

/*
**	Convert string to int.
**	./ft_atoi.c
*/
int				ft_atoi(const char *str);

/*
**	The function contiguously allocates enough space for count objects
**	that are size bytes of memory each and returns a pointer to the allocated
**	memory.  The allocated memory is filled with bytes of value zero.
**	./ft_calloc.c
*/
void			*ft_calloc(size_t count, size_t size);

/*
**	Copy string in a new automatically allocated string.
**	./ft_strdup.c
*/
char			*ft_strdup(const char *s1);

/*
**	Extract string from s.
**	./ft_substr.c
*/
char			*ft_substr(const char *s, unsigned int start, size_t len);

/*
**	Append two strings.
**	./ft_strjoin.c
**	Return new allocated string.
*/
char			*ft_strjoin(char const *s1, char const *s2);

/*
**	Trim string s1 by charset set.
**	./ft_strtrim.c
*/
char			*ft_strtrim(const char *s1, const char *set);

/*
**	Split string on all occurences of c in s.
**	./ft_split.c
*/
char			**ft_split(char const *s, char c);

/*
**	Convert int to allocated string.
**	./ft_itoa.c
*/
char			*ft_itoa(int n);

/*
**	Apply function f on every chars of s.
**	unsigned int -> the char index
**	char -> the char
**	./ft_strmapi.c
*/
char			*ft_strmapi(const char *s, char (*f)(unsigned int, char));

/*
**	Print char c in a specified file director.
**	./ft_putchar_fd.c
*/
void			ft_putchar_fd(char c, int fd);

/*
**	Print string s in a specified file director.
**	./ft_putstr_fd.c
*/
void			ft_putstr_fd(char *s, int fd);

/*
**	Print string s followed by new line in a specified file director.
**	./ft_putendl_fd.c
*/
void			ft_putendl_fd(char *s, int fd);

/*
**	Print number n on a specified file director.
**	./ft_putnbr_fd.c
*/
void			ft_putnbr_fd(int n, int fd);

/*
**	Create new node of a list.
**	./ft_lstnew.c
*/
t_list			*ft_lstnew(void *content);

/*
**	Add element to front of list alst.
**	./ft_lstadd_front.c
*/
void			ft_lstadd_front(t_list **alst, t_list *new);

/*
**	Get the size of list lst.
**	./ft_lstsize.c
*/
int				ft_lstsize(t_list *lst);

/*
**	Get last element of list lst.
**	./ft_lstlast.c
*/
t_list			*ft_lstlast(t_list *lst);

/*
**	Add element to back of list alst.
**	./ft_lstadd_back.c
*/
void			ft_lstadd_back(t_list **alst, t_list *new);

/*
**	Remove one item of list lst.
**	./ft_lstdelone.c
*/
void			ft_lstdelone(t_list *lst, void (*del)(void *));

/*
**	Clear all elements in list lst and lst.
**	./ft_lstclear.c
*/
void			ft_lstclear(t_list **lst, void (*del)(void *));

/*
**	Apply function f to list elements contained in lst.
**	./ft_lstiter.c
*/
void			ft_lstiter(t_list *lst, void (*f)(void *));

/*
**	Duplicate list lst by applying f function to all lst elements.
**	./ft_lstmap.c
*/
t_list			*ft_lstmap(t_list *lst,
							void *(*f)(void *),
							void (*del)(void *));

#endif
