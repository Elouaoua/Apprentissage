/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   joueur.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meel-oua <meel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:41:54 by meel-oua          #+#    #+#             */
/*   Updated: 2023/11/20 16:47:58 by meel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>


struct joueur
{
	char	nom[100];
	int	numero;
	char	equipe[100];
};

#include <stdio.h>

int main()
{
	char 	equipe1[] = "Real Madrid";
	struct joueur CR7;
	{
		strcpy(CR7.nom, "Cristiano Ronaldo AKA CR7\n");
		strcpy(CR7.equipe, &equipe1);
		CR7.numero = 7;
	};
	

	printf("%s", CR7.nom);
	printf("%s\n", CR7.equipe);
	printf("%d", CR7.numero);
}