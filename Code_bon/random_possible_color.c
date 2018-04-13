#include <time.h>
#include <stdlib.h>
#include "prototype.h"
#include <stdio.h>

char random_possible_color(char perso, char *tableau, int taille){ //sort une couleur aléatoire parmis celle à disposition du joueur
	
	int positions[taille*taille][2]; // tableau dans lequel on va stocker les positions actuelles possédées par le joueur
	int compte=0; // un compte utilisé pour remplir le tableau avec les positions
	int i, j, k, l;
	
			
	//on va chercher les positions du joueur
	for(i=0;i<taille;i++){
		for(j=0;j<taille;j++){
			if(get_cell(i,j, tableau)== perso){
				positions[compte][1]=i;
				positions[compte][2]=j;
				compte=compte+1;
			}
		}
	}
	char couleurs[7];  //tableau dans lequel on stocke les couleurs à disposition du joueur
	int compte2=0; // un compte utilisé pour remplir le tableau des couleurs
	char actualcolor;
	int ilyest=0;// variable indiquant si une couleur est dans un tableau ou non
	
	 //condition d'arret évitant de chercher plus de couleur si on les as toutes
		
	for(k=0;k<compte;k++){
		int x=positions[k][1];
		int y=positions[k][2];
		
		if((x-1!=-1)){
			actualcolor=get_cell(x-1,y, tableau);
			for(l=0; l<compte2; l++){
				if((actualcolor==couleurs[l]) || (actualcolor=='^') || (actualcolor=='v')){
					ilyest=1;
				}
			}
			if(ilyest==0){
				couleurs[compte2]=actualcolor;
				compte2++;
			}
			ilyest=0;
		}
		
		
		
		if((x+1!=taille)){
			actualcolor=get_cell(x+1,y, tableau);
			for(l=0; l<compte2; l++){
				if((actualcolor=='^') || (actualcolor=='v')||(actualcolor==couleurs[l])){
					ilyest=1;
				}
			}
			if(ilyest==0){
				couleurs[compte2]=actualcolor;
				compte2++;
			}
			ilyest=0;
		}
		
		
		
		if((y-1!=-1)){
			actualcolor=get_cell(x,y-1, tableau);
			for(l=0; l<compte2; l++){
				if((actualcolor=='^') || (actualcolor=='v')||(actualcolor==couleurs[l])){
					ilyest=1;
				}
			}
			if(ilyest==0){
				couleurs[compte2]=actualcolor;
				compte2++;
			}
			ilyest=0;
		}
		
		
		
		if((y+1!=taille)){
			actualcolor=get_cell(x,y+1, tableau);
			for(l=0; l<compte2; l++){
				if((actualcolor=='^') || (actualcolor=='v')||(actualcolor==couleurs[l])){
					ilyest=1;
				}
			}
			if(ilyest==0){
				couleurs[compte2]=actualcolor;
				compte2++;
			}
			ilyest=0;
		}
	
	}


/**	for(int y=0;y<compte2+1;y++){
		printf("%c\n", couleurs[y]);
	}
*/

	srand(time(NULL)); 
	int nb_alea; //Nombre aleatoire
	int inf = 0, sup = compte2-1; //Bornes inférieures et supérieures pour avoir une couleur aléatoire.
	nb_alea = rand()%((sup+1) - inf ) + inf;
	char color;
	switch(nb_alea){ //On regarde chaque cas pour déterminer la couleur 
							 //choisie aleatoirement				
					case 0 : 
						color=couleurs[0];
						break;
						
					case 1 : 
						color=couleurs[1];
						break;
						
					case 2 : 
						color=couleurs[2];
						break;
						
					case 3 : 
						color=couleurs[3];
						break;
						
					case 4 : 
						color=couleurs[4];
						break;
						
					case 5 : 
						color=couleurs[5];
						break;
						
					case 6 : 
						color=couleurs[6];
						break;	
					}
	return color;
	
}

