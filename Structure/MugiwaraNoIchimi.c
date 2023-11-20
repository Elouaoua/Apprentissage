/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MugiwaraNoIchimi.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meel-oua <meel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:15:03 by meel-oua          #+#    #+#             */
/*   Updated: 2023/11/20 17:27:12 by meel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

struct MembreEquipage
{
	char	nom[60];
	int		puissance;
	char	Fruit[50];
	char	Fonction[25];
};

void	creerMembre(struct MembreEquipage *pirate)
{
	printf("Quel est ton nom ratpi ?? ");
	scanf("%s", pirate->nom);
	printf("Quel est ton fruit du demon ?");
	scanf("%s", pirate->Fruit);
	printf("Quel est ta specialite ?");
	scanf("%s", pirate->Fruit);
}

int main()
{
	struct MembreEquipage pirate;
	
	creerMembre(&pirate);

	printf("Il s'agit de %s ", pirate.nom);
	printf("au %s ", pirate.Fruit);
}
