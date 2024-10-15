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

int	ft_tolower(int str)
{
	if (str >= 65 && str <= 90)
		return (str += 32);
	else
		return (str);
}
/*
int	main(void)
{
	printf("%d\n", ft_tolower(97));
	return (0);
}*/
