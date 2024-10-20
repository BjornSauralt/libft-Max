/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:21:07 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/15 12:21:10 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	if (!size || dest == src)
		return (dest);
	while (size--)
		*str1++ = *str2++;
	return (dest);
}
/*
int main(void)
{
	int array [] = { 54, 85, 20, 63, 21 };
	int * copy = NULL;
	int length = sizeof( int ) * 5;
	   
	// Memory allocation and copy
	copy = (int *) malloc( length );
	ft_memcpy( copy, array, length );
		
	// Display the copied values 
	for( length=0; length<5; length++ ) {
		printf( "%d ", copy[ length ] );
	}
	printf( "\n" );
		
	free( copy );
	
	return (0);
}*/