/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aturibio <aturibio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 08:51:56 by aturibio          #+#    #+#             */
/*   Updated: 2021/07/31 08:51:58 by aturibio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	Z;

	Z = 'z';
	while (Z >= 'a')
	{
		write (1, &Z, 1);
		Z--;
	}
}
