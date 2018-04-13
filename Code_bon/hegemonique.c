#include "prototype.h"

char hegemonique(char perso, char *tableau, int taille){ //va choisir la couleur qui est en majorité à sa disposition sur son bord
	int positions[taille*taille][2]; // tableau dans lequel on va stocker les positions actuelles sur les bords possédées par le joueur
	int compte=0; // un compte utilisé pour remplir le tableau avec les positions
	int i, j, k, l,m; 
	int pos_horizon, pos_vertical;  // position horizontal et vertical maximal du joeur		
	//on va chercher les positions du joueur
	char actualcolor='z';
	if (perso=='v'){ // on prend ici la position la )plus à droite sur chaque ligne
		j=0;
		i=0;
		while(i!=-1){
			while (j!=taille){
				actualcolor=get_cell(i,j, tableau);
				if(actualcolor== perso){
					positions[compte][1]=i;
					positions[compte][2]=j;
				}
				if((j==taille-1) && (compte<j)){ // si on n'a trouvé aucune position sur cette ligne
					pos_horizon=positions[compte][1];
					pos_vertical=positions[compte][2]=j;
					j=taille-1;
					i=0;
				}
				if (positions[compte][1]==i){ // on vérifie qu'on a ajouté une position
					compte=compte+1;
				}
				j++;
			}
			j=0;
			i=i-1;
		}
		for(m=0;m<pos_vertical;m++){
			if(get_cell(pos_horizon,m, tableau)== perso){
				positions[compte][1]=i;
				positions[compte][2]=j;
				compte++;
			}
		}
	}
	
	if (perso=='^'){ // on prend ici la position la plus à gauche sur chaque ligne
		j=taille-1;
		while(i!=taille){
			while(j!=-1){
				actualcolor=get_cell(i,j, tableau);
				if(actualcolor== perso){
					positions[compte][1]=i;
					positions[compte][2]=j;
				}
				if((j==0) && (compte<j)){ // si on n'a trouvé aucune position sur cette ligne
					pos_horizon=positions[compte][1];
					pos_vertical=positions[compte][2]=j;
					j=0;
					i=taille-1;
				}
				j=j-1;
			}
			j=taille-1;
			i++;
			if (positions[compte][1]==i){ // on vérifie qu'on a ajouté une position
				compte=compte+1;
			}
		}
		for(m=pos_vertical-1;m>-1;m--){
			if(get_cell(pos_horizon,m, tableau)== perso){
				positions[compte][1]=i;
				positions[compte][2]=j;
				compte++;
			}
		}
	}

	
	char couleurs[7];
	couleurs[0]='A'; couleurs[1]='B'; couleurs[2]='C'; couleurs[3]='D'; couleurs[4]='E'; couleurs[5]='F'; couleurs[6]='G';
	int couleur_compte[7]; //associe à chaque couleur son nombre à disposition du joueur
	couleur_compte[0]=0; couleur_compte[1]=0; couleur_compte[2]=0; couleur_compte[3]=0; couleur_compte[4]=0; couleur_compte[5]=0; couleur_compte[6]=0;
	char couleur_char;
	int couleur_int;

	for(k=0;k<compte;k++){
		int x=positions[k][1];
		int y=positions[k][2];
		
		if((x-1!=-1)){
			couleur_char=get_cell(x-1,y, tableau);
			if ((couleur_char!='^') && (couleur_char!='v')){
				couleur_int=char_to_int(couleur_char); // associe à chaque couleur A,B,C,D,E,F,G un chiffre entre 0 et 6
				couleur_compte[couleur_int]=couleur_compte[couleur_int]+1;
			}
		}
		
		
		
		if((x+1!=taille)){
			couleur_char=get_cell(x+1,y, tableau);
			if ((couleur_char!='^') && (couleur_char!='v')){
				couleur_int=char_to_int(couleur_char); 
				couleur_compte[couleur_int]=couleur_compte[couleur_int]+1;
			}
		}
		
		
		
		if((y-1!=-1)){
			couleur_char=get_cell(x,y-1, tableau);
			if ((couleur_char!='^') && (couleur_char!='v')){
				couleur_int=char_to_int(couleur_char); 
				couleur_compte[couleur_int]=couleur_compte[couleur_int]+1;
			}
		}
		
		
		
		if((y+1!=taille)){
			couleur_char=get_cell(x,y+1, tableau);
			if ((couleur_char!='^') && (couleur_char!='v')){
				couleur_int=char_to_int(couleur_char); 
				couleur_compte[couleur_int]=couleur_compte[couleur_int]+1;
			}
		}
	}

	int max=0; //on cherche maintenant la couleur prédominante
	int nb_max=0;

	for (l=0;l<7;l++){
		if (couleur_compte[l]>nb_max){
			max=l;
			nb_max=couleur_compte[l];
		}
	}

	return couleurs[max];
	}
