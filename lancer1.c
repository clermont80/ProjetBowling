#include <stdio.h>
#include <stdlib.h>
#include "joueur.h"

void fonction1lancer(Joueur* pointeurtab_joueur)
{
	int nbaleatoirelancer;
    int touractuel;

	srand(time(NULL));                      //on g�n�re un nombre al�atoire entre 0 et 10 pour simuler un lancer

	do
	{
		printf("Appuyez sur '*' pour lancer \n");
		nbaleatoirelancer = rand()%10+0;
	}while(nbaleatoirelancer!='*');


	if(nbaleatoirelancer<10)   //lancer classique
	{
	   touractuel = pointeurtab_joueur->tourcourant;   //on regarde � quel tour on se trouve pour savoir quelle case du tableau tab_score incr�menter
	   pointeurtab_joueur->tab_score[touractuel]=nbaleatoirelancer;
	   intervallelancer2=10-nbaleatoirelancer //on calcule l'intervalle du second lancer
	   fonction2lancer(intervallelancer2,Joueur* pointeurtab_joueur); //on lance une deuxieme fois

	}

	if(nbaleatoirelancer==10) //strike
	{
	   touractuel = pointeurtab_joueur->tourcourant;
	   pointeurtab_joueur->tab_score[touractuel]=10;   //le premier lancer vaut 10
	   pointeurtab_joueur->tab_score[touractuel+1]=-1; //le second -1 �tant donn� qu'il n'est pas jou�
	   pointeurtab_joueur->tourcourant=tourcourant++; //on change de tour

	}





}
