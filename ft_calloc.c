#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (nmemb && (size * nmemb) / nmemb != size)
		return (NULL);
	mem = (void *)malloc(size * nmemb);
	if (!mem)
		return (NULL);
	ft_bzero(mem, (nmemb * size));
	return (mem);
}