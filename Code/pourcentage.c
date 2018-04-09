#include <stdio.h>
#include "prototype.h"

void pourcentage (char joueur, int taille, char *tableau){
/** Fonction qui prend en parametres :
 * score : entier qui represente le nombre de cases occupées par un joueur
 * joueur : caractere qui definit de quel joueur on veut le pourcentage
 * taille : entier qui represente la taille d'un tableau
 * 
 * 
 */
	float taux, taille_tot = taille*taille;
	
	taux = (score(joueur, taille, tableau) / taille_tot) * 100.0;
	
	printf("JOUEUR %c : %f \n", joueur, taux); 
	printf("SCORE = %d\n", score(joueur, taille, tableau));
}

