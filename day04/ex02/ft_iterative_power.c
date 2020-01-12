/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davelazq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 21:52:06 by davelazq          #+#    #+#             */
/*   Updated: 2020/01/11 23:30:58 by davelazq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;
	int counter;

	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	result = 1;
	counter = 0;
	while (counter < power)
	{
		result *= nb;
		counter++;
	}
	return (result);
}
