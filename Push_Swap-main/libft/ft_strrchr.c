/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olyetisk <olyetisk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:16:03 by olyetisk          #+#    #+#             */
/*   Updated: 2023/12/13 17:57:50 by olyetisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*result;

	i = ft_strlen(s);
	result = (char *)s;
	while (i >= 0)
	{
		if (result[i] == (char)c)
		{
			return (&result[i]);
		}
		i--;
	}
	return (0);
}
