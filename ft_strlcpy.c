/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matnusko <matnusko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:28:38 by matnusko          #+#    #+#             */
/*   Updated: 2025/08/29 18:27:36 by matnusko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size -1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}

/*int main(void)
{
	char	str[]= "hello";
	char	dest[] = "heLlw";
	unsigned int i = 6;

	ft_strlcpy(dest, str, i);
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}*/