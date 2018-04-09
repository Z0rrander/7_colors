#include <time.h>
#include <stdlib.h>

char random_color(){
	srand(time(NULL)); 
	int nb_alea; //Nombre aleatoire
	int inf = 1, sup = 7; //Bornes inférieures et supérieures pour avoir une couleur aléatoire.
	switch(nb_alea){ //On regarde chaque cas pour déterminer la couleur 
							 //choisie aleatoirement				
					case 1 : 
						set_cell(i, j,'A', tableau);
						
					case 2 : 
						set_cell(i, j,'B', tableau);
						
					case 3 : 
						set_cell(i, j,'C', tableau);
						
					case 4 : 
						set_cell(i, j,'D', tableau);
						
					case 5 : 
						set_cell(i, j,'E', tableau);
						
					case 6 : 
						set_cell(i, j,'F', tableau);
						
					case 7 : 
						set_cell(i, j,'G', tableau);	
					}
					
}
