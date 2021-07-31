/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aturibio <aturibio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 08:52:32 by aturibio          #+#    #+#             */
/*   Updated: 2021/07/31 08:52:33 by aturibio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	aa;
	int	bb;

	aa = 0;
	{
		while (aa <= 98)
		{
			bb = aa + 1;
			while (bb <= 99)
			{
				ft_putchar(48 + (aa / 10));
				ft_putchar(48 + (aa % 10));
				ft_putchar(' ');
				ft_putchar(48 + (bb / 10)); 
				ft_putchar(48 + (bb % 10)); 
				if (!(aa == 98 && bb == 99))
					write(1, ", ", 2);
				bb++;
			}
			aa++;
		}
	}
}
