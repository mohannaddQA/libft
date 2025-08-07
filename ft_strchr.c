#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return ('\0');
}
/*
To match the return type and avoid warnings:
Cast the (const char *) to (char *) read this: 
stackoverflow.com/questions/2316387/initialization-discards-qualifiers-from-pointer-target-type
*/