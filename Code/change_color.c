void change_color(char perso, char couleur, int taille){
	int positions[taille*taille][2]; // tableau dans lequel on va stocker les positions actuelles possédées par le joueur
	int compte=0; // un compte utilisé pour remplir le tableau avec les positions
	int i, j, k;
	/*for(i=0;i<taille*taille,i++){
		for(j=0,j<2,j++){
			positions[i][j]=30 */ // on remplit le tableau d'une position qui n'existe pas
			
	//on va chercher les positions du joueur
	for(i=0;i<30;i++){
		for(j=0;j<30;j++){
			if(get_cell(i,j)== perso){
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
		
		if((x-1!=-1) && (x-1!=30)){
			if((y-1!=-1) && (y-1!=30)){
				if(get_cell(x-1,y-1)==couleur){
					set_cell(x-1,y-1,perso);
				}
			}
			
			if((y+1!=-1) && (y+1!=30)){
				if(get_cell(x-1,y+1)==couleur){
					set_cell(x-1,y+1,perso);
				}
			}
		}
		
		if((x+1!=-1) && (x+1!=30)){
			if((y-1!=-1) && (y-1!=30)){
				if(get_cell(x+1,y-1)==couleur){
					set_cell(x+1,y-1,perso);
				}
			}
			
			if((y+1!=-1) && (y+1!=30)){
				if(get_cell(x+1,y+1)==couleur){
					set_cell(x+1,y+1,perso);
				}
			}
		}
	}
}

void main(){
}
					
		
	
