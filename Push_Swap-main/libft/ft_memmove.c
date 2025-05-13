/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olyetisk <olyetisk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 15:08:34 by olyetisk          #+#    #+#             */
/*   Updated: 2023/12/15 15:09:16 by olyetisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*source;
	unsigned char	*dest;
	size_t			i;

	source = (unsigned char *)src;
	dest = (unsigned char *)dst;
	i = 0;
	if (!len || dst == src)
		return (dst);
	if (dst < src)
	{
		while (len > 0)
		{
			dest[i] = source[i];
			i++;
			len--;
		}
	}
	else
	{
		while (len--)
			dest[len] = source[len];
	}
	return (dst);
}
