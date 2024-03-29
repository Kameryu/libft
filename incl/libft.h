/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msorin <msorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 16:23:20 by msorin            #+#    #+#             */
/*   Updated: 2015/02/20 16:01:49 by msorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "define_lft.h"

# include <stddef.h>

/*
** ft_aitoia_()
*/
int			ft_atoi(const char *str);
char		*ft_itoa(int n);

/*
** ft_is_()
*/
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);

/*
** ft_lst_()
*/
void		ft_lstadd(t_list **alst, t_list *new);
t_list		*ft_lstcpy(t_list *lst);
void		ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void		ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list		*ft_lstnew(void const *content, size_t content_size);

/*
** ft_mem_()
*/
void		ft_bzero(void *s, size_t n);
void		*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memcpy(void *s1, const void *s2, size_t n);
void		*ft_memmove(void *s1, const void *s2, size_t n);
void		*ft_memset(void *b, int c, size_t len);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memalloc(size_t size);
void		ft_memdel(void **ap);

/*
** ft_put_()
*/
void		ft_putchar(char c);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr(char const *s);
void		ft_putstr_fd(char const *s, int fd);
void		ft_putendl(char const *s);
void		ft_putendl_fd(char const *s, int fd);
void		ft_putnbr(int n);
void		ft_putnbr_fd(int n, int fd);

/*
** ft_str_()
*/
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strchr(const char *s, int c);
char		*ft_strcpy(char *s1, const char *s2);
char		*ft_strdup(const char *s1);
char		*ft_strncat(char *s1, const char *s2, size_t n);
char		*ft_strncpy(char *s1, const char *s2, size_t n);
char		*ft_strnstr(const char *s1, const char *s2, size_t n);
char		*ft_strrchr(const char *s, int c);
char		*ft_strstr(const char *s1, const char *s2);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
size_t		ft_strlen(const char *s);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		ft_strclr(char *s);
void		ft_strdel(char **as);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		**ft_strsplit(char const *s, char c);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strnew(size_t n);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strtrim(char const *s);
int			ft_strequ(char const *s1, char const *s2);
int			ft_strnequ(char const *s1, char const *s2, size_t n);

/*
** other-util()
*/
int			ft_toupper(int c);
int			ft_tolower(int c);

#endif
