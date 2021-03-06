#include <time.h>
#include <stdlib.h>
#include "prototype.h"

void generate_board (int taille, char *tableau){
	
/** Cette fonction prend en paramètre :
 * int taille : la taille maximale du tableau
 * char *tableau : le tableau initialisé avec tous les zeros
 */
	int i, j; //Compteurs pour accéder aux éléments du tableau
	int inf = 1, sup = 7; //Bornes inférieures et supérieures pour avoir une couleur aléatoire.
	int nb_alea; //Nombre aleatoire

	srand(time(NULL)); //
	
	for (i = 0; i < taille; i++){
		for (j = 0; j < taille; j++){
			
			nb_alea = rand()%((sup + 1) - inf ) + inf;
			
			if ((j == taille - 1) && (i == 0)){				
				set_cell(i, j,'^', tableau);	
			}
			
			else if ((j == 0) && (i == taille - 1)){				
				set_cell(i, j,'v', tableau);	
			}
			
			else {
				 
				 switch(nb_alea){ //On regarde chaque cas pour déterminer la couleur 
								 //choisie aleatoirement
				
					case 1 : 
						set_cell(i, j,'A', tableau);
						break;
					case 2 : 
						set_cell(i, j,'B', tableau);
						break;
					case 3 : 
						set_cell(i, j,'C', tableau);
						break;
					case 4 : 
						set_cell(i, j,'D', tableau);
						break;
					case 5 : 
						set_cell(i, j,'E', tableau);
						break;
					case 6 : 
						set_cell(i, j,'F', tableau);
						break;
					case 7 : 
						set_cell(i, j,'G', tableau);	
						break;
			}
			}
		}
	}

}



