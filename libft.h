/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgarsaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:24:18 by mgarsaul          #+#    #+#             */
/*   Updated: 2024/10/14 12:01:25 by mgarsaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

int		ft_isprint(int str);
int		ft_isalpha(char *str);
int		ft_isalnum(char *str);
int		ft_isascii(int str);
int		ft_isdigit(int str);
void	*ft_memchr(void *arr, int search, int size);
void	*ft_memset(void *arr, int val, int size);
char	*ft_strchr(char *str, int car);
int		ft_strlen(char *str);
int		ft_strncmp(char *str1, char *str2, unsigned int n);
char	*ft_strrchr(char *str, int car);
int		ft_tolower(int str);
int		ft_toupper(int str);
int		ft_memcmp(void *arr1, void *arr2, int size);
void	*ft_bzero(void *arr, int n);
void	*ft_memcpy(void *dest, void *src, int size);
void	*ft_memmove(void *dest, void *src, int size);
int		ft_strlcpy(char *dest, char *src, int size);
int		ft_atoi(char *str);
int		ft_strlcat(char *dest, char *src, int size);

#endif
