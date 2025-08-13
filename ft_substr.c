/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuqare  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 23:51:52 by mabuqare          #+#    #+#             */
/*   Updated: 2025/08/12 02:13:46 by mabuqare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;

	if (!s)
		return (NULL);
	if (start >= ft_strlen((char *)s))
		return (ft_strdup(""));
	sub_str = (char *) malloc((sizeof(char)) * (len + 1));
	if (!sub_str)
		return (NULL);
	ft_strlcpy(sub_str, (char *)&s[start], len + 1);
	return (sub_str);
}

// int main()
// {
// 	printf("%s", ft_substr("hello", 0, 2));
// }