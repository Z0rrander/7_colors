#include "prototype.h"

int char_to_int(char couleur_char){ // associe à chaque couleur A,B,C,D,E,F,G un chiffre entre 0 et 6
	int couleur_int;
	
	if (couleur_char=='A'){
		couleur_int= 0;
	}
	
	if (couleur_char=='B'){
		couleur_int= 1;
	}
	
	if (couleur_char=='C'){
		couleur_int= 2;
	}
	
	if (couleur_char=='D'){
		couleur_int= 3;
	}
	
	if (couleur_char=='E'){
		couleur_int= 4;
	}
	
	if (couleur_char=='F'){
		couleur_int= 5;
	}
	
	if (couleur_char=='G'){
		couleur_int= 6;
	}
	
	return couleur_int;
}

