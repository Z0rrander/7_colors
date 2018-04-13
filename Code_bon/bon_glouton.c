#include "prototype.h"

char bon_glouton(char perso, char *tableau, int taille){
	char tab[taille][taille];
	int k,l;
	int compte=0;
	for(int i=0;i<taille;i++){
		for(int j=0;j<taille;j++){
			tab[i][j]=get_cell(i,j, tableau);
		}
	}
	int positions[taille*taille][2];
	for(int i=0; i<taille;i++){
		for(int j=0;j<taille;j++){
			if(tab[i][j]== perso){
				positions[compte][1]=i;
				positions[compte][2]=j;
				compte=compte+1;
			}
		}
	}
	int compte_bis;
	int compte_ter;
	char tab_test[taille][taille];
	int positions_bis[taille*taille][2];
	char couleurs[7];
	couleurs[0]='A'; couleurs[1]='B'; couleurs[2]='C'; couleurs[3]='D'; couleurs[4]='E'; couleurs[5]='F'; couleurs[6]='G';
	int max=0;
	int pos_max=0;
	char couleur;
	for(l=0; l<7;k++){
		couleur=couleurs[k];
		for(int i=0; i<taille;i++){
			for(int j=0;j<taille;j++){
				tab_test[i][j]=tab[i][j];
			}
		}
		for(int i=0; i<compte;i++){
			for(int j=1;j<3;j++){
				positions_bis[i][j]=positions[i][j];
			}
		}
		compte_ter=compte;
		compte_bis=compte_ter-1;
		while (compte_ter>compte_bis){
			compte_bis=compte_ter;
			for(k=0;k<compte_ter;k++){
				int x=positions_bis[k][1];
				int y=positions_bis[k][2];
		
				if((x-1!=-1)){
			
					if(tab_test[x-1][y]==couleur){
						tab_test[x-1][y]=perso;
						positions_bis[compte_ter][1]=x;
						positions_bis[compte_ter][2]=y;
						compte_ter=compte_ter+1;
				
					}
				}
				if((x+1!=taille)){
			
					if(tab_test[x+1][y]==couleur){
						tab_test[x+1][y]=perso;
						positions_bis[compte_ter][1]=x;
						positions_bis[compte_ter][2]=y;
						compte_ter=compte_ter+1;
					}
			
				}
		
				if((y+1!=taille)){
			
					if(tab_test[x][y+1]==couleur){
						tab_test[x][y+1]=perso;
						positions_bis[compte_ter][1]=x;
						positions_bis[compte_ter][2]=y;
						compte_ter=compte_ter+1;
				
					}
				}
				if((y-1!=-1)){
			
					if(tab_test[x][y-1]==couleur){
						tab_test[x][y-1]=perso;
						positions_bis[compte_ter][1]=x;
						positions_bis[compte_ter][2]=y;
						compte_ter=compte_ter+1;
					}
			
				}
			}
			if(compte_ter>max){
				max=compte_ter-1;
				pos_max=l;
			}
		}
	}
	return couleurs[pos_max];
}

