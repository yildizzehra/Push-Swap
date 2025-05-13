/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olyetisk <olyetisk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:24:03 by olyetisk          #+#    #+#             */
/*   Updated: 2023/12/13 17:42:05 by olyetisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;
	int		k;

	i = 0;
	k = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (k + 1));
	if (!str)
		return (NULL);
	while (i < k)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
