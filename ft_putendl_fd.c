/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <mgarsaul@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-17 10:16:41 by mgarsaul          #+#    #+#             */
/*   Updated: 2024-10-17 10:16:41 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	int	val;

	val = 0;
	while (str[val])
	{
		write (fd, &str[val], 1);
		val++;
	}
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	ft_putendl_fd("c", 1);
	return (0);
}*/