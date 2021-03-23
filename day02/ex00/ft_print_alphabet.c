/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davelazq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 19:37:41 by davelazq          #+#    #+#             */
/*   Updated: 2020/01/09 20:19:30 by davelazq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void    ft_print_alphabet(void)
{
    char	letter;

    letter = 'a';
    while (letter <= 'z')
    {
        ft_putchar(letter++);
    }
}