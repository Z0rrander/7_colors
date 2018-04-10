#include <time.h>
#include <stdlib.h>

char random_color(){ // sort n'importe quelle couleur
	srand(time(NULL)); 
	int nb_alea; //Nombre aleatoire
	int inf = 1, sup = 7; //Bornes inférieures et supérieures pour avoir une couleur aléatoire.
	nb_alea = rand()%((sup + 1) - inf ) + inf;
	char color;
	switch(nb_alea){ //On regarde chaque cas pour déterminer la couleur 
							 //choisie aleatoirement				
					case 1 : 
						color='A';
						break;
						
					case 2 : 
						color='B';
						break;
						
					case 3 : 
						color='C';
						break;
						
					case 4 : 
						color='D';
						break;
						
					case 5 : 
						color='E';
						break;
						
					case 6 : 
						color='F';
						break;
						
					case 7 : 
						color='G';
						break;	
					}
	return color;
					
}
