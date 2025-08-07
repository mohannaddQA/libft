/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuqare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 01:36:50 by mabuqare          #+#    #+#             */
/*   Updated: 2025/04/29 02:50:09 by mabuqare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	finallen;

	i = 0;
	if (size == 0 || size <= ft_strle(dst))
		return (ft_strlen(src) + size);
	if (size > ft_strle(dst))
		finallen = ft_strle(src) + ft_strle(dst);
	while (dst[i])
		i++;
	while (*src && i < size - 1)
	{
		dst[i++] = *src;
		src++;
	}
	dst[i] = '\0';
	return (finallen);
}
