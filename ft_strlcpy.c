/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabuqare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 19:26:23 by mabuqare          #+#    #+#             */
/*   Updated: 2025/04/26 19:58:52 by mabuqare         ###   ########.fr       */
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
/*
int main()
{
	char *c = "Mohannad2658";
	char dest[9];
	printf("%d, %s", ft_strlcpy(dest, c, 6), dest);
}*/
/*
 * the main difference in this function:
 * it makes sure to check the full size of the buffer
 * 1- When copying, make sure you are still in the allowed size.
 * 2- If you finish copying:
 * 	- size of dest is fully done.
 * 	- src is fully traversed.
 *    You must make sure that the src length is fully calculated. 
 * 3- Return the length of the src 
 * 
 * 
 * The size of the destination dectates wheather a truncatation will happen to the string or not
 * - If len > size --> trucation will happen, copying will stop when hitting the size of the buffur
 * - if len < size --> normal copy will happen 
 * - If len = size --> it will also truncate since we need an index for the null
*/
/*
Old implementation - wrong 

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;

	len = 0;
	while (*src && (size-- > 1))
	{
		dest[len++] = *src;
		src++;
	}
	dest[len] = '\0';
	while (*src)
	{
		len++;
		src++;
	}
	return (len);
}
*/