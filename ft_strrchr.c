/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:45:20 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/14 15:53:05 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int car)
{
	int	valeur;
	int	occ;

	occ = 0;
	valeur = -1;
	while (str[++valeur])
	{
		if (str[valeur] == car)
			occ = valeur;
	}
	if (str[occ] == car)
		return (&str[occ]);
	else
		return (NULL);
}
/*
int	main(void)
{
	char	str[] = "jdsdadssadd";
	int	car;

	car = 97;
	printf("%s\n", ft_strrchr(str, car));
	return (0);
}*/