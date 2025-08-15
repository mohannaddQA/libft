/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuqare  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 23:50:35 by mabuqare          #+#    #+#             */
/*   Updated: 2025/08/15 14:19:04 by mabuqare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest_copy;

	if ((!src && !dest) || !n)
		return (dest);
	dest_copy = dest;
	while (n-- > 0)
		*((char *)dest_copy++) = *((char *)src++);
	return (dest);
}
