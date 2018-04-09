#include <time.h>
#include <stdlib.h>

char random_possible_color(char perso, char *tableau, int taille){ //sort une couleur aléatoire parmis celle à disposition du joueur
	int positions[taille*taille][2]; // tableau dans lequel on va stocker les positions actuelles possédées par le joueur
	int compte=0; // un compte utilisé pour remplir le tableau avec les positions
	int i, j, k, l;
	/*for(i=0;i<taille*taille,i++){
		for(j=0,j<2,j++){
			positions[i][j]=30 */ // on remplit le tableau d'une position qui n'existe pas
			
	//on va chercher les positions du joueur
	for(i=0;i<taille;i++){
		for(j=0;j<taille;j++){
			if(get_cell(i,j, *tableau)== perso){
				positions[compte][1]=i;
				positions[compte][2]=j;
				compte=compte+1;
			}
		}
	}
	char couleurs[7] //tableau dans lequel on stocke les couleurs
	int compte2=0
	char actualcolor
	
	for(k=0;k<compte;k++){
		int x=positions[k][1];
		int y=positions[k][2];
		
		if((x-1!=-1) && (x-1!=taille)){
			if((y!=-1) && (y!=taille)){
					for(l=0; l<compte2; l++){
						actualcolor=get_cell(x-1,y, *tableau)
						if((actualcolor==couleur[l]) && (actualcolor!=perso){
						set_cell(x-1,y,perso, *tableau);
					}
				}
			}
		}
		if((x+1!=-1) && (x+1!=taille)){
			if((y!=-1) && (y!=taille)){
				if(get_cell(x+1,y, *tableau)==couleur){
					set_cell(x+1,y,perso, tableau);
				}
			}
		}
		
		if((y+1!=-1) && (y+1!=taille)){
			if((x!=-1) && (x!=taille)){
				if(get_cell(x,y+1, *tableau)==couleur){
					set_cell(x,y+1,perso, tableau);
				}
			}
		}
		if((y-1!=-1) && (y+1!=taille)){
			if((x!=-1) && (x!=taille)){
				if(get_cell(x,y-1, *tableau)==couleur){
					set_cell(x,y-1,perso, *tableau);
				}
			}
		}
	}
}

}
