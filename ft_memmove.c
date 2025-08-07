#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_new;
	char	*src_new;

	dest_new = (char *)dest;
	src_new = (char *)src;
	if (dest == src)
		return (dest);
	if (dest_new < src_new)
	{
		while (n--)
			*(dest_new++) = *(src_new++);
	}
	else
	{
		while (n--)
			*(dest_new + n) = *(src_new + n);
	}
	return (dest);
}
// Assuming that dest > src ==> we can't move directly cause some bytes might be lost from the sourse because of the overlab
// So, we can start the copying process from the last byte to be copied which is after n bytes from the starting point (src_new + (n-1))
// The last byte will be moved to the last byte in the destination (dest + (n-1))
// This effectivly moves n bytes (src byte + the following (n-1) bytes)
// https://marmota.medium.com/c-language-making-memmove-def8792bb8d5
/*
	else
	{
		dest_new += n - 1;
		src_new += n - 1;
		while (n--)
		{
			*dest_new-- = *src_new--;
		}
	}
*/


