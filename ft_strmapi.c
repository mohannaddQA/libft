#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*s_modified;

	if (!s)
		return (NULL);
	s_modified = malloc(sizeof(char) * (ft_strlen(s)) + 1);
	i = 0;
	while (s[i])
	{
		s_modified[i] = f(i, s[i++]);
		// i++;
	}
	s_modified[i] = '\0';
	return (s_modified);
}