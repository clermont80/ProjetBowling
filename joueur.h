#ifndef JOUEUR_H
#define JOUEUR_H

typedef struct
{
	char speudo[10];
	int tab_score[21];
	int scorefinal[10];

} Joueur;

void testJoueur(Joueur * j);

#endif
