#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_cpy;
	unsigned char		c_cpy;

	s_cpy = (const unsigned char *)s;
	c_cpy = c;
	while (n--)
	{
		if (*s_cpy++ == c_cpy)
			return ((void *)(s_cpy - 1));
	}
	return (NULL);
}
