/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olyetisk <olyetisk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:43:45 by olyetisk          #+#    #+#             */
/*   Updated: 2023/12/13 17:42:15 by olyetisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t sz)
{
	size_t	i;

	i = ft_strlen(dst) + ft_strlen(src);
	if (sz <= ft_strlen(dst))
		return (sz + ft_strlen(src));
	ft_strlcpy (dst + ft_strlen(dst), src, sz - ft_strlen(dst));
	return (i);
}
