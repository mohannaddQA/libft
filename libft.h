#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

/* ---------------	LISTS		--------------- */
/* ---------------	CHARS		--------------- */
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
/* ---------------	STRINGS		--------------- */
size_t	ft_strlen(char *str);
size_t	ft_strlcat(char *dst, char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strcpy(char *dest, char *src);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strdup(char *src);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
/* ---------------   FILE DESCRIPTORS   --------------- */
void    ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

/* ---------------	MEMORY		--------------- */
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*calloc(size_t nmemb, size_t size);

/* ---------------	NUMBERS		--------------- */
int		ft_atoi(const char *nptr);
char	*ft_itoa(int n);
#endif