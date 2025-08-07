#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest_copy;

	dest_copy = dest;
	while (n-- > 0)
	{
		*((char *)dest++) = *((const char *)src++);
	}
	return (dest_copy);
}

// We can't dereference a void pointer
// We must cast the type in order to dereference it