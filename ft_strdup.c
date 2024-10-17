/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <mgarsaul@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-16 09:55:47 by mgarsaul          #+#    #+#             */
/*   Updated: 2024-10-16 09:55:47 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	i = -1;
	while (src[len])
		++len;
	str = (char *) malloc(sizeof(*str) * (len + 1));
	while (++i < len)
		str[i] = src[i];
	return (str);
}
/*
int	main(void)
{
	printf("le resultat est : '%s'\n", ft_strdup("adiadayv"));
	return (0);
}*/	