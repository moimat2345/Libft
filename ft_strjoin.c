/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matnusko <matnusko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 19:43:18 by matnusko          #+#    #+#             */
/*   Updated: 2025/09/02 22:31:34 by matnusko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	char	*rendu;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	rendu = (char *)malloc(len1 + len2 + 1);
	if (!rendu)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		rendu[i] = s1[i];
		i++;
	}
	while (i - len1 < len2)
	{
		rendu[i] = s2[i - len1];
		i++;
	}
	rendu[i] = '\0';
	return (rendu);
}
