/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 19:42:44 by jaleman           #+#    #+#             */
/*   Updated: 2020/01/11 23:26:01 by davelazq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (!nb || power < 0)
		return (0);
	if (!power)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
