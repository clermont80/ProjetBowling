#include <stdio.h>
#include <stdlib.h>
#include "inscription.h"


void inscription(Joueur* pointeur_tabjoueur)
{
	printf("Veuillez saisir votre speudo (10 caractere max) \n");
	scanf("%s",pointeur_tabjoueur->speudo);   //le joueur saisit son pseudo
	printf("\n");

}
