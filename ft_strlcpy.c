/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuqare  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:26:23 by mabuqare          #+#    #+#             */
/*   Updated: 2025/08/08 00:07:39 by mabuqare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;

	srclen = ft_strlen((char *)src);
	if (dstsize == 0)
		return (srclen);
	while (*src && (dstsize-- > 1))
		*dst++ = *src++;
	*dst = '\0';
	return (srclen);
}
