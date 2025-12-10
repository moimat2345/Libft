/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateon <mateon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 17:23:23 by matnusko          #+#    #+#             */
/*   Updated: 2025/12/10 09:31:51 by mateon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int ft_memcmp(const void *s1, const void *s2, size_t n);

// int main(void)
// {
//     char str1[] = "Hello";
//     char str2[] = "Hello";
//     char str3[] = "Hellp";

//     printf("ft_memcmp(str1, str2, 5) = %d\n", ft_memcmp(str1, str2, 5));
//     printf("memcmp(str1, str2, 5)    = %d\n", memcmp(str1, str2, 5));

//     printf("ft_memcmp(str1, str3, 5) = %d\n", ft_memcmp(str1, str3, 5));
//     printf("memcmp(str1, str3, 5)    = %d\n", memcmp(str1, str3, 5));

//     printf("ft_memcmp(str1, str3, 4) = %d\n", ft_memcmp(str1, str3, 4));
//     printf("memcmp(str1, str3, 4)    = %d\n", memcmp(str1, str3, 4));

//     return 0;
// }
