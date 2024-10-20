/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:11:15 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/14 17:20:45 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int search, size_t size)
{
	unsigned char	*str;
	size_t			val;

	str = (unsigned char *)arr;
	val = 0;
	while (val < size)
	{
		if (str[val] == (unsigned char)search)
			return ((void *)&str[val]);
		val++;
	}
	return (NULL);
}
/*
int main(void)
{
	char    arr[12];

	ft_memchr(arr, 'A', 11));
	printf("%s\n", arr);
	return (0);
}*/