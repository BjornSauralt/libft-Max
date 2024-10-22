/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <mgarsaul@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-17 10:10:00 by mgarsaul          #+#    #+#             */
/*   Updated: 2024-10-17 10:10:00 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	str_len;
	char	*str;

	str_len = strlen(s);
	if (start >= str_len)
		return (strdup(""));
	if (len > str_len - start)
		len = str_len - start;
	str = (char *)malloc(sizeof (*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

size_t	ft_strlen(const char *str)
{
	int	valeur;

	valeur = 0;
	while (str[valeur])
		valeur++;
	return (valeur);
}

static int	ft_isset(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*ret;
	char	*start;
	char	*end;

	if (!s1 || !set)
		return (0);
	start = (char *)s1;
	end = start + ft_strlen(s1);
	while (*start && ft_isset(*start, set))
		++start;
	while (start < end && ft_isset(*(end - 1), set))
		--end;
	ret = ft_substr(start, 0, end - start);
	return (ret);
}
/*
int	main(void)
{
	const char	*test = "!!!Hello, World!!!";
	const char	*set = "!";
	char		*resultat = ft_strtrim(test, set);

	printf("original: '%s', Trimme: '%s'\n", test, resultat);
	free(resultat);
	return (0);
}*/