/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemarco <ddemarco@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 12:19:53 by ddemarco          #+#    #+#             */
/*   Updated: 2022/05/15 14:19:24 by ddemarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "include/ft_printf.h"

int	main(void)
{
	int mine;
	int	orig;
	int str = 1542; //malloc (4 * 10);
	
	mine = ft_printf("%-9.3s", "goooood");
	printf("\n");
	orig = printf("%-9.3s",  "goooood");
	printf("\n");
	printf("Mine: %d", mine);
	printf("\n");
	printf("Orig: %d", orig);
	printf("\n");
	
	return (0);
}