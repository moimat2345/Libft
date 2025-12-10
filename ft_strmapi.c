/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matnusko <matnusko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 04:13:55 by mateon            #+#    #+#             */
/*   Updated: 2025/09/04 01:22:25 by matnusko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*rendu;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	rendu = (char *)malloc(len + 1);
	if (!rendu)
		return (NULL);
	while (i < len)
	{
		rendu[i] = f((unsigned int)i, s[i]);
		i++;
	}
	rendu[i] = '\0';
	return (rendu);
}
