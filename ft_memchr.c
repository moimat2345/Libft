/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matnusko <matnusko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 16:59:52 by matnusko          #+#    #+#             */
/*   Updated: 2025/08/29 18:15:14 by matnusko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*der;

	der = (unsigned char *)s;
	while (n--)
	{
		if (*der == (unsigned char)c)
			return ((void *)der);
		der++;
	}
	return (NULL);
}
