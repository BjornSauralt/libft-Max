#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t size)
{
	size_t	len_n;
	size_t	i;
	size_t	j;

	if (!str || !to_find)
		return (NULL);
	if (ft_strlen(to_find) == 0)
		return ((char *) str);
	len_n = ft_strlen(to_find);
	i = 0;
	while (str[i] && i < size)
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j] && i + j < size)
			j++;
		if (j == len_n)
			return ((char *) str + i);
		i++;
	}
	return (NULL);
}