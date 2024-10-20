/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:21:12 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/15 11:21:16 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t size)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)arr1;
	str2 = (const unsigned char *)arr2;
	if (size)
	{
		while (size--)
		{
			if (*str1++ != *str2++)
				return (*(--str1) - *(--str2));
		}
	}
	return (0);
}
/*
int main(void)
{
	char    arr1[] = "Hello";
	//char    arr2[] = "Hello";
	int resultat = ft_memcmp(arr1, arr1, 5);
	
	printf("%d\n", resultat);
	return (0);
}*/