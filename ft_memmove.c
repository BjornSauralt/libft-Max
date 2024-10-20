/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:08:04 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/15 13:08:06 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#define ELEMENT_COUNT 10

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (d > s)
	{
		while (len-- > 0)
			d[len] = s[len];
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

/*
int	main(void) 
{
	// On crée une zone de mémoire de 10 entiers et contenant
	// que neuf valeurs. La dixième est non utilisée (0).
	int data[] = { 20, 30, 40, 50, 60, 70, 80, 90, 100, 0 };

	// On affiche le contenu de la collection
	for( int i=0; i<ELEMENT_COUNT; i++ ) {
		printf( "%d ", data[i] );
	}
	puts( "" );  // Un retour à la ligne

	// On décale les éléménts dans la collection ...
	void * source = (void *) data;
	void * destination = (void *) ( data + 1 );
	size_t size = ELEMENT_COUNT * sizeof( int );
	memmove( destination, source, size );

	// ... pour y insérer une nouvelle valeur en tête
	data[0] = 10;

	// On affiche le contenu de la collection
	for( int i=0; i<ELEMENT_COUNT; i++ ) {
		printf( "%d ", data[i] );
	}
	puts( "" );  // Un retour à la ligne

	return (0);
}*/