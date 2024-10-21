/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:11:24 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/14 17:29:58 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*val;

	val = (unsigned char *)b;
	while (len-- > 0)
		*(val++) = (unsigned char)c;
	return (b);
}
/*
int	main(void)
{
	char	arr[9];

	ft_memset(arr, 'A', 10);
	printf("%s\n", arr);
	return (0);
}*/