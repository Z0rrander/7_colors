#include <stdio.h>

void pourcentage (int score, char joueur, int taille){
/** Fonction qui prend en parametres :
 * score : entier qui represente le nombre de cases occupées par un joueur
 * joueur : caractere qui definit de quel joueur on veut le pourcentage
 * taille : entier qui represente la taille d'un tableau
 * 
 * 
 */
	float taux;
	
	taux = score / (taille*taille)
	
	printf("TAUX D'OCCUPATION : %f \n", taux); 
}

