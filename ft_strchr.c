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

char	*ft_strchr(const char *str, int car)
{
	int	valeur;

	valeur = 0;
	if (!str)
		return (NULL);
	while (str[valeur] != '\0')
	{
		if (str[valeur] == (char)car)
			return ((char *)str + valeur);
		valeur++;
	}
	if (str[valeur] == (char) car)
		return ((char *) str + valeur);
	return (NULL);
}
/*
int	main(void)
{
	char s[] = "tripouille";

	printf("%s\n", ft_strchr(s, 't' + 256));
	return (0);
}*/
