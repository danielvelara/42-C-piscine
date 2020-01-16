/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davelazq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 22:35:14 by davelazq          #+#    #+#             */
/*   Updated: 2020/01/12 23:34:37 by davelazq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_put_same_char(char c, int times)
{
	int counter;

	counter = 0;
	while (counter < times)
	{
		ft_putchar(c);
		counter++;
	}
}

void draw_line(int line, int block)
{
	ft_putchar('/');
	//ft_put_same_char('*',4);
	ft_putchar('\\');
	ft_putchar('\n');
}

void sastantua(int size)
{
	int block;
	int num_lines;
	int counter_lines;
	int total_lines;

	total_lines = 1;
	block = 1;
	while (block <= size)
	{
		num_lines = block + 2;
		counter_lines = 1;
		while(counter_lines <= num_lines)
		{
			draw_line(total_lines, block);
			total_lines++;
			counter_lines++;
		}
		block++;
	}
}

int main(void)
{
	//sastantua(3);
	int num;
	int line = 8;
	int block = 3;

	num = (((2 * line - 1) +  (block / 2) * (2 * (block / 2) + 2)));
	printf("%d\n",num);
	return (0);
}
