#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "joueur.h"
#include "lancer1.h"
#include "lancer2.h"
#include "initialisejoueur.h"


void lancer1(Joueur* pointeurtab_joueur)
{
	char touche=0;
    int nbaleatoirelancer;
	int touractuel=pointeurtab_joueur->tourcourant;   //on regarde � quel tour on se trouve pour savoir quelle case du tableau tab_score incr�menter
	int intervallelancer2;
	char name[10] = pointeurtab_joueur->speudo;

	srand(time(NULL));
	printf("Votre premier lancer %s \n",name);

	while(touche!='*')
	{

		printf("Appuyez sur '*' pour lancer \n");
		fflush(stdin);
		scanf("%c",&touche);

	}

	nbaleatoirelancer = rand()%10+0;   //on g�n�re un nombre al�atoire entre 0 et 10 pour simuler un lancer
	printf("vous venez de renverser %d quille(s) \n",nbaleatoirelancer);


	if(nbaleatoirelancer<10 && touractuel!=9)   //lancer classique
	{
	   pointeurtab_joueur->tab_score[touractuel]=nbaleatoirelancer;
	   intervallelancer2=10-nbaleatoirelancer; //on calcule l'intervalle du second lancer
	   lancer2(intervallelancer2,pointeurtab_joueur); //on lance une deuxieme fois

	}

	if(nbaleatoirelancer==10 && touractuel!=9) //strike
	{

	   pointeurtab_joueur->tab_score[touractuel]=10;   //le premier lancer vaut 10
	   pointeurtab_joueur->tab_score[touractuel+1]=-1; //le second -1 �tant donn� qu'il n'est pas jou�
	   pointeurtab_joueur->tourcourant++; //on passe au tour suivant

	}

	if(touractuel==9) //si on se trouve au dernier tour
	{
		if(nbaleatoirelancer<10)   //lancer classique
		{
			 pointeurtab_joueur->tab_score[touractuel]=nbaleatoirelancer;
			 intervallelancer2=10-nbaleatoirelancer; //on calcule l'intervalle du second lancer
			 lancer2(intervallelancer2,pointeurtab_joueur); //on lance une deuxieme fois

		}

		if(nbaleatoirelancer==10) //strike
		{

			pointeurtab_joueur->tab_score[touractuel]=10;   //le premier lancer vaut 10
			pointeurtab_joueur->tab_score[touractuel+1]=-1; //le second -1 �tant donn� qu'il n'est pas jou�
			lancer2(intervallelancer2,pointeurtab_joueur);  //le passage de 'intervallelancer2'' est inutile dans le cas du strike mais la d�finition de la fonction oblige � le mettre en param�tre

		}


    }





}
