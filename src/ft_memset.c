/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mateon <mateon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:36:29 by matnusko          #+#    #+#             */
/*   Updated: 2025/12/10 09:32:00 by mateon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	if (!s)
		return (0);
	i = 0;
	temp = (unsigned char *)s;
	while (i < n)
	{
		temp[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>

// void printArray(int arr[], int n)
// {
//    for (int i=0; i<n; i++)
//       printf("%d ", arr[i]);
// }

// int main()
// {
//     int n = 10;
//     int arr[n];
// 	int n2 = 10;
//     int arr2[n];

//     // Fill whole array with 0.
//     memset(arr, 0, sizeof(arr));
//     printf("Real memset()\n");
//     printArray(arr, n);

// 	ft_memset(arr2, 0, sizeof(arr2));
//     printf("\nMy memset()\n");
//     printArray(arr2, n2);

//     return 0;
// }