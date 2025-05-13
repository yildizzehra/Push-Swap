/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olyetisk <olyetisk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:25:02 by olyetisk          #+#    #+#             */
/*   Updated: 2023/12/13 17:57:58 by olyetisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	c;

	if (!s1 || !set)
		return (0);
	c = 0;
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	c = ft_strlen(s1);
	while (c && ft_strchr(set, s1[c]))
		c--;
	return (ft_substr(s1, 0, c + 1));
}
