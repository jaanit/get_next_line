/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaanit <rjaanit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:42:20 by rjaanit           #+#    #+#             */
/*   Updated: 2021/11/28 20:44:11 by rjaanit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		j;
	int		i;
	int		len;
	char	*ptr;

	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	if (!s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);
	j = 0;
	i = -1;
	while (s1[++i])
		ptr[i] = s1[i];
	while (s2[j])
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	free (s1);
	return (ptr);
}

char	*ft_strchr(char *s, int c)
{
	char	*str;
	char	ch;
	int		i;

	i = 0;
	str = (char *)s;
	ch = (char )c;
	if (!s)
		return (NULL);
	while (str[i] != ch)
	{
		if (str[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (str + i);
}

size_t	ft_strlen(char *str)
{
	int		i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
