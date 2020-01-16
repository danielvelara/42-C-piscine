/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davelazq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 14:08:06 by davelazq          #+#    #+#             */
/*   Updated: 2020/01/15 17:26:17 by davelazq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
void    ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

int ft_strlen(char *str){
    return (sizeof(str) - 1);
}

int	main(int argc, char *argv[])
{
    char str1[] = "Hola";
    char str2[] = "Hola";

    // printf("%d",strcmp(str1,str2));
    printf("%s",argv[1]);
    // printf("%d",str1 == str1);

    return (0);
}

