#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int					len;
	char				*joined_str;
	char				*joined_str_cpy;

	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	joined_str = malloc((sizeof(char) * (len + 1)));
	joined_str_cpy = joined_str;
	if (!joined_str)
		return (NULL);
	while (*s1)
		*joined_str++ = *s1++;
	while (*s2)
		*joined_str++ = *s2++;
	*joined_str = '\0';
	return (joined_str_cpy);
}

int main()
{
	printf("%s",ft_strjoin("mohannad" , " is good!"));
}