#include <stdio.h>
#include <stdlib.h>
#include "joueur.h"
#include "lancer1.h"
#include "lancer2.h"

void fonction2lancer(int intervallelancer2,Joueur* pointeurtab_joueur)
{
	int nbaleatoirelancer;
    int touractuel;

	srand(time(NULL));  //on g�n�re un nombre al�atoire entre intervallelancer2 et 10 pour simuler un lancer

	do
	{
		printf("Appuyez sur '*' pour lancer \n");
		nbaleatoirelancer = rand()%10+nbaleatoirelancer2;
	}while(nbaleatoirelancer!='*');

	touractuel = pointeurtab_joueur->tourcourant;   //on regarde � quel tour on se trouve pour savoir quelle case du tableau tab_score incr�menter
	pointeurtab_joueur->tab_score[touractuel+1]=nbaleatoirelancer;
    pointeurtab_joueur->tourcourant=tourcourant++;




}
