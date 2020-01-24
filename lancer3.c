#include <stdio.h>
#include <stdlib.h>
#include "joueur.h"
#include "lancer1.h"
#include "lancer2.h"
#include "lancer3.h"

void lancer3(Joueur* pointeurtab_joueur)
{
	int touractuel=pointeurtab_joueur->tourcourant;   //on regarde � quel tour on se trouve pour savoir quelle case du tableau tab_score incr�menter
	char touche;
	int nbaleatoirelancer;


	srand(time(NULL));  //on g�n�re un nombre al�atoire entre intervallelancer2 et 10 pour simuler un lancer

	while(touche!='*')
	{
		printf("Appuyez sur '*' pour lancer \n");
        fflush(stdin);
		scanf("%c",&touche);

	}

	nbaleatoirelancer = rand()%10+0;
	printf("vous venez de renverser %d quille(s) \n",nbaleatoirelancer);
	printf("\n");

	if(nbaleatoirelancer==10) //strike lors du second (et dernier) lancer bonus
	{

		pointeurtab_joueur->tab_score[touractuel+4]=10;   //le premier lancer vaut 10
		pointeurtab_joueur->tab_score[touractuel+5]=-1; //le second -1 �tant donn� qu'il n'est pas jou�
	}
	else
	{
        pointeurtab_joueur->tab_score[touractuel+2]=nbaleatoirelancer;
    }

	pointeurtab_joueur->tourcourant++;  //� ce stade le jeu est termin�






}
