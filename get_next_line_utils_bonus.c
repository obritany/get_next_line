/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obritany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 19:56:20 by obritany          #+#    #+#             */
/*   Updated: 2020/12/24 19:56:22 by obritany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (0);
	while (*s && (*s != (char)c))
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t len;

	if (!s)
		return (0);
	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *rslt;
	char *temp;

	if (!s1 || !s2)
		return (0);
	rslt = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (rslt == 0)
		return (0);
	temp = rslt;
	while (*s1)
	{
		*temp = *s1;
		temp++;
		s1++;
	}
	while (*s2)
	{
		*temp = *s2;
		temp++;
		s2++;
	}
	*temp = '\0';
	return (rslt);
}

char	*ft_strdup(const char *str)
{
	ssize_t	i;
	char	*dest;

	if (!str)
		return (0);
	dest = malloc(sizeof(*dest) * (ft_strlen(str) + 1));
	if (dest == 0)
		return (0);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
