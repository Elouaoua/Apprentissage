/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gestionEtudiant.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meel-oua <meel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:49:11 by meel-oua          #+#    #+#             */
/*   Updated: 2023/11/20 17:12:40 by meel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

struct Etudiant
{
	char	nom[100];
	int		age;
	float	moyenne;
};

void	saisirEtudiant(struct Etudiant *etudiant)
{
	printf("Saisissez votre Nom");
	scanf("%s", etudiant->nom);
	printf("Saisissez votre age");
	scanf("%d", &etudiant->age);
	printf("Saisissez votre moyenne generale");
	scanf("%f", &etudiant->moyenne);
}

int main()
{
	struct Etudiant etudiant1;

	saisirEtudiant(&etudiant1);

	printf("L'etudiant s'apelle %s\n", etudiant1.nom);
	printf("Il/Elle a %d ans\n", etudiant1.age);
	if (etudiant1.moyenne >= 15)
		printf("et c'est un bon bosseur, Moyenne de : %.2f !\n", etudiant1.moyenne);
	if (etudiant1.moyenne >= 10 && etudiant1.moyenne < 15)
		printf("et il/elle est detenteeeee, Moyenne de : %.2f !\n", etudiant1.moyenne);
	else if (etudiant1.moyenne < 10)
		printf("chakal... reprends toi, Moyenne de : %.2f !\n", etudiant1.moyenne);
	return (0);
}