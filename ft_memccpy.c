#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n-- > 0)
	{
		*((unsigned char *)dest++) = *((const char *)src);
		if (*((const unsigned char *)src++) == ((unsigned char)c))
			return (dest);
	}
	return (NULL);
}
// We can't return '\0' cause it's not a void pointer
// We must return NULL because it's a pointer not a char as '\0' or 0