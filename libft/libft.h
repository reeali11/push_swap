/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:00:35 by reeali            #+#    #+#             */
/*   Updated: 2024/02/26 16:00:37 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <fcntl.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	int				index;

	struct s_list	*next;
}					t_list;

void				ft_bzero(void *str, size_t n);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memset(void *str, int enc, size_t num);
size_t				ft_strlen(const char *str);
int					ft_tolower(int c);
int					ft_toupper(int c);
void				*ft_memmove(void *dst, const void *src, size_t n);
void				ft_putchar_fd(char c, int fd);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
void				ft_putstr_fd(char *s, int fd);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);
int					ft_atoi(const char *str, t_list **stack_a, char *s,
						char **x);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_strdup(const char *s1);
void				*ft_calloc(size_t count, size_t size);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
t_list				*ft_lstnew(int content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
char				*ft_strchr_gnl(const char *s, int c);
char				*ft_str_init(void);
char				*ft_strjoin_(char *s1, char *s2);
void				ft_put_pointer(unsigned long pointer, int *length);
void				ft_put_pointer(unsigned long pointer, int *length);
void				ft_putchar(char c, int *len);
void				ft_putnbr(int nb, int *len);
void				ft_putstr(char *str, int *len);
void				ft_putunsnbr(unsigned int unnb, int *len);
void				ft_put_hexa(unsigned int x, int *len, char c);
int					ft_printf(const char *string, ...);

#endif