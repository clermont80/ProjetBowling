#include <stdio.h>
#include <stdlib.h>
#include "joueur.h"
#include "lancer1.h"
#include "lancer2.h"

void lancer2(int intervallelancer2,Joueur* pointeurtab_joueur)
{
	int touractuel=pointeurtab_joueur->tourcourant;   //on regarde � quel tour on se trouve pour savoir quelle case du tableau tab_score incr�menter
	char touche=0;
	int nbaleatoirelancer;

	printf("Votre second lancer \n");
	srand(time(NULL));  //on g�n�re un nombre al�atoire entre intervallelancer2 et 10 pour simuler un lancer

	while(touche!='*')
	{
	    printf(" \n");
		printf("Appuyez sur '*' pour lancer \n");
        fflush(stdin);
		scanf("%c",&touche);

	}

	nbaleatoirelancer = rand()%intervallelancer2+0;
	printf("vous venez de renverser %d quille(s) \n",nbaleatoirelancer);

	if(touractuel!=9)                  //comptage classique
	{
	  pointeurtab_joueur->tab_score[touractuel+1]=nbaleatoirelancer;
	  pointeurtab_joueur->tourcourant++;
	}

	if(touractuel==9) //si on se trouve au dernier tour
	{
		if(nbaleatoirelancer+intervallelancer2==10)    //le joueur fait un spare lors du dernier tour, il a droit � un unique lancer bonus
		{
			 pointeurtab_joueur->tab_score[touractuel+1]=nbaleatoirelancer;
			 lancer3(pointeurtab_joueur);
		}
		else
		{
			pointeurtab_joueur->tab_score[touractuel+1]=nbaleatoirelancer;
			pointeurtab_joueur->tourcourant++;
        }

		nbaleatoirelancer = rand()%10+0;

		if(nbaleatoirelancer==10) //strike lors du premier lancer bonus
		{
			pointeurtab_joueur->tab_score[touractuel+2]=10;   //le premier lancer vaut 10
			pointeurtab_joueur->tab_score[touractuel+3]=-1; //le second -1 �tant donn� qu'il n'est pas jou�
			lancer3(pointeurtab_joueur); //le joueur a droit � un second lancer bonus
		}


    }

	




}
