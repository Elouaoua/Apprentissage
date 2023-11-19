/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Yonko.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meel-oua <meel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:58:17 by meel-oua          #+#    #+#             */
/*   Updated: 2023/11/19 15:14:04 by meel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

struct Yonko
{
	char	Nom[100];
	unsigned int		prime;
	char	FruitDuDemon[100];
};

int main()
{
	struct Yonko yonko1;
	
	strcpy(yonko1.Nom, "DokeNoBaggy 道 ドウ 化 ケ のバギー");
	strcpy(yonko1.FruitDuDemon, "Bara Bara No Mi バラバラ人間");
	yonko1.prime = 3189000000;

	printf("El Yonko %s\nau %s\n", yonko1.Nom, yonko1.FruitDuDemon);
	printf("-------------------\n");
	printf("DEAD OR ALIVE\n");
	printf("%u BERRY$", yonko1.prime);
}