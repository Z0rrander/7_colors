#include <time.h>
#include <stdlib.h>

void generate_board (int taille, char *tableau){
	
/** Cette fonction prend en paramètre :
 * int taille : la taille maximale du tableau
 * char *board : le tableau initialisé avec tous les zeros
 */
	int i, j; //Compteurs pour accéder aux éléments du tableau
	int inf = 1, sup = 7; //Bornes inférieures et supérieures pour avoir une couleur aléatoire.
	int nb_alea; //Nombre aleatoire

	srand(time(NULL)); //
	
	for (i = 0; i < taille; i++){
		for (j = 0; j < taille; j++){
			
			nb_alea = rand()%(sup - inf) + inf;
			
			if ((j == taille - 1) && (i == 0)){				
				set_cell(i, j,'^', *tableau);	
			}
			
			if ((j == 0) && (i == taille - 1)){				
				set_cell(i, j,'v', *tableau);	
			}
			
			else {
				 
				 switch(nb_alea){ //On regarde chaque cas pour déterminer la couleur 
								 //choisie aleatoirement
				
					case 1 : 
						set_cell(i, j,'A', *tableau);
						
					case 2 : 
						set_cell(i, j,'B', *tableau);
						
					case 3 : 
						set_cell(i, j,'C', *tableau);
						
					case 4 : 
						set_cell(i, j,'D', *tableau);
						
					case 5 : 
						set_cell(i, j,'E', *tableau);
						
					case 6 : 
						set_cell(i, j,'F', *tableau);
						
					case 7 : 
						set_cell(i, j,'G', *tableau);	
					
			}
			}
		}
	}

}



