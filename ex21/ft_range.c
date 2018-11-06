/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 13:05:40 by erli              #+#    #+#             */
/*   Updated: 2018/11/06 15:16:45 by erli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	if (!(tab = (int*)malloc(sizeof(int) * (max - min))))
		return (0);
	while (min + i < max)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
