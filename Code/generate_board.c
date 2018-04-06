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
	char color; //Couleur choisie aleatoirement
	
	srand(time(NULL)); //
	
	for (int i = 0; i <= taille; i++){
		for (int j = 0; j <= taille; j++){
			
			nb_alea = rand()%(sup - inf) + inf;
			
			if ((j == 30) && (i == 0)){				
				tableau[i][j] == '^';	
			}
			
			if ((j == 0) && (i == 30)){				
				tableau[i][j] == 'v';	
			}
			
			else {
				 
				 switch(nb_alea){ //On regarde chaque cas pour déterminer la couleur 
								 //choisie aleatoirement
				
					case 1 : 
						color = 'A';
						
					case 2 : 
						color = 'B';
						
					case 3 : 
						color = 'C';
						
					case 4 : 
						color = 'D';
						
					case 5 : 
						color = 'E';
						
					case 6 : 
						color = 'F';
						
					case 7 : 
						color = 'G';	
					
			}
			}
		}
	}

}
