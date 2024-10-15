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

void	*ft_memcpy(void *dest, void *src, int size)
{
	int	valeur;

	valeur = 0;
	while (valeur < size)
	{
		*(unsigned int *)(dest + valeur) = *(unsigned int *)(src + valeur);
		valeur++;
	}
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