int score(int perso, int taille, char *tableau){
	int compte=0;
	for(int i=0;i<taille;i++){
		for(int j=0;j<taille;j++){
			if(get_cell(i,j, *tableau)== perso){
				compte=compte+1;
			}
		}
	}
	return compte;
}
