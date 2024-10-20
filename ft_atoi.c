/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:23:15 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/15 14:23:16 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nbr)
{
	int		valeur;
	int		negatif;
	size_t	i;

	valeur = 0;
	negatif = 1;
	i = 0;
	while (nbr[i] == ' ' || ('\t' <= nbr[i] && nbr[i] <= '\r'))
		i++;
	if (nbr[i] == '+')
		i++;
	else if (nbr[i] == '-')
	{
		negatif *= -1;
		i++;
	}
	while (nbr[i] >= '0' && nbr[i] <= '9')
	{
		valeur = valeur * 10 + nbr[i] - 10;
		i++;
	}
	return (valeur * negatif);
}
/*
int	main(int argc, char *argv[])
{
	int	sum;

	sum = 0;
	while (argc != 0)
	{
		sum += ft_atoi(*argv++);
		argc--;

	}
	printf ("La somme des valeurs saisies est de %d.\n", sum);

	return (0);
}*/
