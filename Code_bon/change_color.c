#include "prototype.h"

void change_color(char perso, char couleur, int taille, char* tableau){
	
	int positions[taille*taille][2]; // tableau dans lequel on va stocker les positions actuelles possédées par le joueur
	int compte=0; // un compte utilisé pour remplir le tableau avec les positions
	int i, j, k;


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
	
	//on étudie maintenant les valeurs autour des positions du joueur
	
	for(k=0;k<compte;k++){
		int x=positions[k][1];
		int y=positions[k][2];
		
		if((x-1!=-1)){
			
				if(get_cell(x-1,y, tableau)==couleur){
					set_cell(x-1,y,perso, tableau);
				
			}
		}
		if((x+1!=taille)){
			
				if(get_cell(x+1,y, tableau)==couleur){
					set_cell(x+1,y,perso, tableau);
				}
			
		}
		
		if((y+1!=taille)){
			
				if(get_cell(x,y+1, tableau)==couleur){
					set_cell(x,y+1,perso, tableau);
				
			}
		}
		if((y-1!=-1)){
			
				if(get_cell(x,y-1, tableau)==couleur){
					set_cell(x,y-1,perso, tableau);
				}
			
		}
	}
}

