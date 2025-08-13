/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuqare  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 23:51:45 by mabuqare          #+#    #+#             */
/*   Updated: 2025/08/12 02:06:54 by mabuqare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occ;

	last_occ = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			last_occ = (char *)s;
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (last_occ);
}
