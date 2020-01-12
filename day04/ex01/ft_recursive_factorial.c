/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davelazq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 21:13:56 by davelazq          #+#    #+#             */
/*   Updated: 2020/01/11 23:34:00 by davelazq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 12)
	{
		return (0);
	}
	if (nb >= 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	if (nb == 0)
	{
		return (1);
	}
	return (0);
}
