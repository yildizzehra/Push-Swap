/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olyetisk <olyetisk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:40:47 by olyetisk          #+#    #+#             */
/*   Updated: 2023/12/15 14:58:17 by olyetisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	m;
	char	*str;

	i = 0;
	str = (char *)haystack;
	if (!needle[i])
		return (str);
	else if (len == 0)
		return (0);
	while (str[i] != '\0' && i < len)
	{
		m = 0;
		while ((needle[m] && str[i + m] == needle[m] && (i + m < len)))
			m++;
		if (needle[m] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
