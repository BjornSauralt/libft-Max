/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:03:06 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/14 14:09:20 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	valeur;

	valeur = 0;
	while (str[valeur])
		valeur++;
	return (valeur);
}
/*
int	main(void)
{
	printf("%d\n", ft_strlen("dayid"));
	return (0);
}*/