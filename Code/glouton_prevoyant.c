#include "prototype.h"

char glouton(char perso, char *tableau, int taille){ //va choisir la couleur qui est en majorité à sa disposition
	int positions[taille*taille][2]; // tableau dans lequel on va stocker les positions actuelles possédées par le joueur
	int compte=0; // un compte utilisé pour remplir le tableau avec les positions
	int i, j, k, l, m;
  int tab[taille][taille];
  char couleurs[7];
  couleurs[0]='A'; couleurs[1]='B'; couleurs[2]='C'; couleurs[3]='D'; couleurs[4]='E'; couleurs[5]='F'; couleurs[6]='G';
  int best_max=0;
  int pos_best_max=0;
  
  for(l=0;l<7,l++){
  
  for(i=0;i<taille;i++){ //on crée un tableau représentant les combinaisons possibles pour chercher la meilleur
	  for(j=0;j<taille;j++){
      		tab[i][j]=get_cell(i,j, tableau)
    	}
   }
   
  
	//on va chercher les positions du joueur
	for(i=0;i<taille;i++){
		for(j=0;j<taille;j++){
			if(tab[i][j]== perso){
				positions[compte][1]=i;
				positions[compte][2]=j;
				compte=compte+1;
			}
		}
	}
	
  for(k=0;k<compte;k++){
		int x=positions[k][1];
		int y=positions[k][2];
		
		if((x-1!=-1)){
			
			if(tab[x-1][y]==couleur[l]){
				tab[x-1][y]=perso;
				positions[compte][1]=x-1;
				positions[compte][2]=y;
				compte=compte+1;
			}
		}
		if((x+1!=taille)){
			
			if(tab[x+1][y]==couleur[l]){
				tab[x+1][y]=perso;
          			positions[compte][1]=x+1;
				positions[compte][2]=y;
				compte=compte+1;
			}
			
		}
		
		if((y+1!=taille)){
			
			if(tab[x][y+1]==couleur[l]){
				tab[x][y+1]=perso;
          			positions[compte][1]=x;
				positions[compte][2]=y+1;
				compte=compte+1;
				
			}
		}
		if((y-1!=-1)){
			
			if(tab[x][y-1]==couleur[l]){
				 tab[x][y-1]=perso;
         			 positions[compte][1]=x;
				 positions[compte][2]=y-1;
				 compte=compte+1;
			}
			
		}
	}
}

  
	
	int couleur_compte[7]; //associe à chaque couleur son nombre à disposition du joueur
	couleur_compte[0]=0; couleur_compte[1]=0; couleur_compte[2]=0; couleur_compte[3]=0; couleur_compte[4]=0; couleur_compte[5]=0; couleur_compte[6]=0;
	char couleur_char;
	int couleur_int;

	for(k=0;k<compte;k++){
		int x=positions[k][1];
		int y=positions[k][2]; 	 
		
		if((x-1!=-1)){
			couleur_char=tab[x-1][y];
			if ((couleur_char!='^') && (couleur_char!='v')){
				couleur_int=char_to_int(couleur_char); // associe à chaque couleur A,B,C,D,E,F,G un chiffre entre 0 et 6
				couleur_compte[couleur_int]=couleur_compte[couleur_int]+1;
			}
		}
		
		
		
		if((x+1!=taille)){
			couleur_char=tab[x+1][y];
			if ((couleur_char!='^') && (couleur_char!='v')){
				couleur_int=char_to_int(couleur_char); 
				couleur_compte[couleur_int]=couleur_compte[couleur_int]+1;
			}
		}
		
		
		
		if((y-1!=-1)){
			couleur_char=couleur_char=tab[x][y-1];
			if ((couleur_char!='^') && (couleur_char!='v')){
				couleur_int=char_to_int(couleur_char); 
				couleur_compte[couleur_int]=couleur_compte[couleur_int]+1;
			}
		}
		
		
		
		if((y+1!=taille)){
			couleur_charcouleur_char=tab[x][y+1];
			if ((couleur_char!='^') && (couleur_char!='v')){
				couleur_int=char_to_int(couleur_char); 
				couleur_compte[couleur_int]=couleur_compte[couleur_int]+1;
			}
		}
	}

	int max=0; //on cherche maintenant la couleur prédominante
	int nb_max=0;

	for (m=0;m<7;m++){
		if (couleur_compte[l]>nb_max){
			max=l;
			nb_max=couleur_compte[l];
		}
	}
  }
	if(nb_max+compte-1>best_max{
		best_max=nb_max+compte-1;
		pos_best_max=l;
	}
		
	
	return couleurs[pos_best_max];
}
