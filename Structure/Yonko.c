/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Yonko.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meel-oua <meel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:58:17 by meel-oua          #+#    #+#             */
/*   Updated: 2023/11/19 15:23:47 by meel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

struct Yonko
{
	char	Nomfr[100];
	char	Nomjap[100];
	unsigned int		prime;
	char	FruitDuDemon[100];
};

int main()
{
	struct Yonko yonko1;
	struct Yonko yonko2;
	struct Yonko yonko3;
	struct Yonko yonko4;
	
	strcpy(yonko1.Nomfr, "DokeNoBaggy");
	strcpy(yonko1.Nomjap, "道 ドウ 化 ケ のバギー");
	strcpy(yonko1.FruitDuDemon, "Bara Bara No Mi バラバラ人間");
	yonko1.prime = 3189000000;

	strcpy(yonko2.Nomfr, "Monkey D. Luffy");
	strcpy(yonko2.Nomfr, "モンキー・D・ルフィ");
	strcpy(yonko2.FruitDuDemon, "Gomu Gomu no Mi ヒトヒトの実 モデル「ニカ");
	yonko2.prime = 3000000000;
	
	printf("El Yonko %s\n%s\nau %s\n", yonko1.Nomjap, yonko1.Nomfr, yonko1.FruitDuDemon);
	printf("DEAD OR ALIVE\n");
	printf("%u BERRY$\n", yonko1.prime);
	printf("\n");
	printf("-------------------\n");
	printf("\n");
	printf("El Yonko %s\n%s\nau %s\n", yonko2.Nomjap, yonko2.Nomfr, yonko2.FruitDuDemon);
	printf("DEAD OR ALIVE\n");
	printf("%u BERRY$", yonko2.prime);
}