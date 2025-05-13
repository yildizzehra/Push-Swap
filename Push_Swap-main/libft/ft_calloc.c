/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olyetisk <olyetisk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:17:27 by olyetisk          #+#    #+#             */
/*   Updated: 2023/12/13 17:36:53 by olyetisk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	
	char		*ptr;

	
	ptr = (char *)malloc(sizeof(char) * (count * size));
	if (!ptr)
		return (NULL);
	return (ft_bzero (ptr, count * size), ptr);
}
