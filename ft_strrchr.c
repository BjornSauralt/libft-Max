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

size_t	ft_strlen(const char *str)
{
	int	valeur;

	valeur = 0;
	while (str[valeur])
		valeur++;
	return (valeur);
}

char	*ft_strrchr(char *str, int car)
{
	int	valeur;

	valeur = ft_strlen(str);
	while (valeur >= 0)
	{
		if (str[valeur] == (char) car)
			return ((char *) str + valeur);
		valeur--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char s[] = "tripouille";
	int	car;

	car = 97;
	printf("%d\n", ft_strrchr(s, 't') == s + 8);
	return (0);
}*/