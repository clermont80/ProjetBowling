#include <stdio.h>
#include <stdlib.h>
#include "joueur.h"


void comptagepoint(Joueur* pointeurtab_joueur)
{
   int touractuel;
   int indice;
   touractuel=pointeurtab_joueur->tourcourant;

   for(indice=0;indice<touractuel;indice++)
   {
       if(pointeurtab_joueur->tab_score[indice]==10 && pointeurtab_joueur->tab_score[indice+1]==-1) //c'est un strike
	   {
           pointeurtab_joueur->scorefinal[indice]=10;
		   pointeurtab_joueur->scorefinal[indice] += pointeurtab_joueur->tab_score[indice+2] + pointeurtab_joueur->tab_score[indice+3];  //on ajoute aux 10 points la valeur des deux lancers suivants
       }

	   if(pointeurtab_joueur->tab_score[indice]+pointeurtab_joueur->tab_score[indice+1]==10) //c'est un spare
       {
		   pointeurtab_joueur->scorefinal[indice]=10;
		   pointeurtab_joueur->scorefinal[indice] += pointeurtab_joueur->tab_score[indice+2]; //on ajoute aux 10 points la valeur du premier lancer suivant
	   }

       if(pointeurtab_joueur->tab_score[indice]+pointeurtab_joueur->tab_score[indice+1]!=10) //c'est un coup classique
       {
           pointeurtab_joueur->scorefinal[indice]= pointeurtab_joueur->tab_score[indice]+pointeurtab_joueur->tab_score[indice+1];
	   }

	   if(indice==touractuel-1)  //on se trouve sur le dernier tour où il y a 3 lancers
	   {

       }
   }

}
