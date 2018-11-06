/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:54:24 by erli              #+#    #+#             */
/*   Updated: 2018/11/06 14:55:48 by erli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_sort_argv(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 1;
	j = argc - 1;
	while (i < j)
	{
		k = 0;
		while (i + k < j)
		{
			if (ft_strcmp(argv[i + k], argv[i + k + 1]) > 0)
			{
				str = argv[i + k + 1];
				argv[i + k + 1] = argv[i + k];
				argv[i + k] = str;
			}
			k++;
		}
		j--;
	}
}

int		main(int argc, char **argv)
{
	int i;

	if (argc > 1)
	{
		ft_sort_argv(argc, argv);
		i = 1;
		while (i < argc)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
