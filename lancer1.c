#include <stdio.h>
#include <stdlib.h>
#include "joueur.h"

void fonction1lancer(Joueur* pointeurtab_joueur)
{
	int nbaleatoirelancer;

	srand(time(NULL));                      //on g�n�re un nombre al�atoire entre 0 et 10 pour simuler un lancer

	do
	{
		printf("Appuyez sur '*' pour lancer \n");
		nbaleatoirelancer = rand()%10+0;
	}while(nbaleatoirelancer!='*');


	if(nbaleatoirelancer<10)
	{
		int touractuel = pointeurtab_joueur->tourcourant;   //on regarde � quel tour on se trouve pour savoir quelle case du tableau tab_score incr�menter
		pointeurtab_joueur->tab_score[touractuel]

    }





}
