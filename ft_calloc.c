/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuqare  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 23:49:00 by mabuqare          #+#    #+#             */
/*   Updated: 2025/08/15 11:42:16 by mabuqare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (!nmemb | !size)
	{
		mem = malloc(1);
		if (!mem)
			return (NULL);
		return (mem);
	}
	if (nmemb && ((size * nmemb) / nmemb) != size)
		return (NULL);
	mem = (void *)malloc(size * nmemb);
	if (!mem)
		return (NULL);
	ft_bzero(mem, (nmemb * size));
	return (mem);
}
