#include <stdio.h>
#include <stdlib.h>
#include "combiendejoueur.h"


void combiendejoueur(int* nbjoueurfinal)
{


	printf("Combien de joueurs �tes-vous ? \n");

	do
    {
	   scanf("%d",*nbjoueurfinal);
	}while(*nbjoueurfinal>1 && *nbjoueurfinal<11);

}
