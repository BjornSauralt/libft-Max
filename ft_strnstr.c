/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:09:36 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/15 12:09:41 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_strnstr(const char *big, const char *little, size_t size)
{
	int	i;

	if (*little == '\0')
		return (big);
	while (*big)
	{
		if (*big == *little)
		{
			i = 0;
			while (little[i] != '\0' && big[i] == little[i])
			{
				i++;
			}
			if (little[i] == '\0')
				return (big);
		}
		big++;
	}
	return (NULL);
}*/
