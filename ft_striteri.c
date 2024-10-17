/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <mgarsaul@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-17 10:14:43 by mgarsaul          #+#    #+#             */
/*   Updated: 2024-10-17 10:14:43 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	val;

	val = 0;
	while (s[val])
	{
		(*f)(val, s + val);
		val++;
	}
}
/*
void	ft_modify_char(unsigned int index, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	printf("Index: %u, Caractère modifié: %c\n", index, *c);
}

int	main(void)
{
	char str[] = "hello world!";
	printf("Avant modification: %s\n", str);
	ft_striteri(str, ft_modify_char);
	printf("Après modification: %s\n", str);
	return (0);
}*/
