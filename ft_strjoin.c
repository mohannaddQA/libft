/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuqare  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 23:51:18 by mabuqare          #+#    #+#             */
/*   Updated: 2025/08/09 16:17:14 by mabuqare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int					len;
	char				*joined_str;
	char				*joined_str_cpy;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	joined_str = malloc((sizeof(char) * (len + 1)));
	if (!joined_str)
		return (NULL);
	joined_str_cpy = joined_str;
	while (*s1)
		*joined_str++ = *s1++;
	while (*s2)
		*joined_str++ = *s2++;
	*joined_str = '\0';
	return (joined_str_cpy);
}
