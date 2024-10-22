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
	i = 0;
	if (!src)
		return (NULL);
	while (src[len])
		++len;
	str = (char *) malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void) 
{
	const	char *original = "Hello, world!";
	char	*duplicate;

	duplicate = ft_strdup(original);
	if (duplicate == NULL)
	{
		fprintf(stderr, "Erreur\n");
		return (1);
	}
	printf("Chaîne d'origine: %s\n", original);
	printf("Chaîne dupliquée: %s\n", duplicate);
	free(duplicate);
	return (0);
}*/