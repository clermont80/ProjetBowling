#include <stdio.h>
#include <stdlib.h>
#include "joueur.h"
#include "lancer1.h"
#include "lancer2.h"
#include "lancer3.h"

void lancer3(Joueur* pointeurtab_joueur)
{
	int touractuel=pointeurtab_joueur->tourcourant;   //on regarde à quel tour on se trouve pour savoir quelle case du tableau tab_score incrémenter
	char touche;
	int nbaleatoirelancer;


	srand(time(NULL));  //on génère un nombre aléatoire entre intervallelancer2 et 10 pour simuler un lancer

	do
	{
		printf("Appuyez sur '*' pour lancer \n");
		touche = getch();

	}while(touche!='*');

	nbaleatoirelancer = rand()%10+0;

	if(nbaleatoirelancer==10) //strike lors du second (et dernier) lancer bonus
	{

		pointeurtab_joueur->tab_score[touractuel+4]=10;   //le premier lancer vaut 10
		pointeurtab_joueur->tab_score[touractuel+5]=-1; //le second -1 étant donné qu'il n'est pas joué
	}
	else
	{
        pointeurtab_joueur->tab_score[touractuel+2]=nbaleatoirelancer;
    }

	pointeurtab_joueur->tourcourant++;  //à ce stade le jeu est terminé






}
