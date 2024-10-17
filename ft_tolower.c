/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:14:11 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/14 14:16:26 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int car)
{
	if (car >= 65 && car <= 90)
		return (car += 32);
	else
		return (car);
}
/*
int	main(void)
{
	printf("%d\n", ft_tolower(97));
	return (0);
}*/
