/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuqare  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 23:50:35 by mabuqare          #+#    #+#             */
/*   Updated: 2025/08/12 00:21:06 by mabuqare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest_copy;

	if (!src || !dest)
		return (NULL);
	dest_copy = dest;
	while (n-- > 0)
		*((char *)dest++) = *((char *)src++);
	return (dest_copy);
}
