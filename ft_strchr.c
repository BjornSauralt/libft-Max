/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:19:53 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/14 15:44:48 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int car)
{
	int	valeur;

	valeur = -1;
	while (str[++valeur])
	{
		if (str[valeur] == car)
			return (&str[valeur]);
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "jdsdadssdd";
	int	car;

	car = 97;
	printf("%c\n", ft_strchr(str, car));
	return (0);
}*/
