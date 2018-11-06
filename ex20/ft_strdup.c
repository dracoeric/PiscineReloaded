/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 12:51:18 by erli              #+#    #+#             */
/*   Updated: 2018/11/06 13:02:58 by erli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		n;
	int		i;

	n = ft_strlen(src);
	if (!(str = (char*)malloc(sizeof(char) * (n + 1))))
		return (0);
	i = 0;
	while (i <= n)
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
