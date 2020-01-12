/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davelazq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 16:25:36 by davelazq          #+#    #+#             */
/*   Updated: 2020/01/11 23:32:46 by davelazq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	result;
	int factorial;

	if (nb > 12)
	{
		return (0);
	}
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	result = 1;
	factorial = nb;
	while (factorial != 0)
	{
		result *= factorial;
		factorial--;
	}
	return (result);
}
