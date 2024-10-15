/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:12:16 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/14 13:51:04 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int str)
{
	if (str >= 97 && str <= 122)
		return (str -= 32);
	else
		return (str);
}
/*
int	main(void)
{
	printf("%d\n", ft_toupper(97));
	return (0);
}*/
