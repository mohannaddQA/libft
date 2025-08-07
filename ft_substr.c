#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;

	if (!s) 
		return (NULL);
	// Check this requirement as I couldn't find it anywhere in the oficial documentation
	if (start >= ft_strlen(s))
        return (ft_strdup(""));
	sub_str = (char *) malloc((sizeof(char)) * (len + 1));
	if (!sub_str)
		return (NULL);
	//  We need an extra byte because the implementation reserves 1 byte from the given length for the copying
	 ft_strlcpy(sub_str, (char *)&s[start], len + 1);
	return (sub_str);
}

int main()
{

	
	printf("%s", ft_substr("hello", 0, 2));
}


// the issue with using the bellow function is that it doesn't take care of the case where the src ends before the len is finished.
// ft_memmove(sub_str, (char *)&s[start], len); 
// sub_str[len] = '\0';

