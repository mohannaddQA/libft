char	*ft_strrchr(const char *s, int c)
{
	// move the pointer exactly to the last character
	while (*(s + 1) != '\0')
		s++;
	// Move along the string characters from the back 
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	return ('\0');
}
/*
To match the return type and avoid warnings:
Cast the (const char *) to (char *) read this: 
stackoverflow.com/questions/2316387/initialization-discards-qualifiers-from-pointer-target-type
*/