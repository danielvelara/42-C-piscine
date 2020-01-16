/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davelazq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 21:55:13 by davelazq          #+#    #+#             */
/*   Updated: 2020/01/15 23:31:05 by davelazq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;

	if (argc != 0)
	{
		i = 0;
		while (argv[0][i])
		{
			ft_putchar(argv[0][i++]);
		}
		ft_putchar('\n');
	}
	return (0);
}
