/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuqare  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 23:51:42 by mabuqare          #+#    #+#             */
/*   Updated: 2025/08/12 01:45:20 by mabuqare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	temp;

	i = 0;
	if (!*little)
		return ((char *)(big));
	if (!big || !len)
		return (NULL);
	while (big[i] && i < len)
	{
		j = 0;
		temp = i;
		while (little[j] && big[temp] == little[j] && temp < len)
		{
			j++;
			temp++;
		}
		if (!little[j])
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}
