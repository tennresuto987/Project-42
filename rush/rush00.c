/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaita <msaita@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 12:57:38 by msaita            #+#    #+#             */
/*   Updated: 2021/02/21 14:08:52 by msaita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	header(int hori)
{
	int j;

	j = 1;
	while (j <= hori)
	{
		if (j == 1)
		{
			ft_putchar('o');
		}
		else if (j == hori)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		j++;
	}
}

void	content(int hori)
{
	int k;

	k = 1;
	while (k <= hori)
	{
		if (k == 1 || k == hori)
		{
			ft_putchar('|');
			if (k == hori)
			{
				ft_putchar('\n');
			}
		}
		else
		{
			ft_putchar(' ');
		}
		k++;
	}
}

void	bottom(int hori)
{
	int t;

	t = 1;
	while (t <= hori)
	{
		if (t == 1)
		{
			ft_putchar('o');
		}
		else if (t == hori)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		t++;
	}
}

void	rush(int h, int v)
{
	int i;

	i = 1;
	while (i <= v)
	{
		if (h == 0 || v == 0)
		{
			break ;
		}
		if (i == 1)
		{
			header(h);
			ft_putchar('\n');
		}
		else if (i == v)
		{
			bottom(h);
			ft_putchar('\n');
		}
		else
		{
			content(h);
		}
		i++;
	}
}
