/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsr_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <mgarsaul@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-17 10:16:02 by mgarsaul          #+#    #+#             */
/*   Updated: 2024-10-17 10:16:02 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	val;

	val = 0;
	while (str[val])
	{
		write(fd, str, val);
		val++;
	}
}
/*
int	main(void)
{
	ft_putstr_fd("c", 1);
	return (0);
}*/