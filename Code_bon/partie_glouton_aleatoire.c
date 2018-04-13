#include <unistd.h>
#include <stdio.h>
#include "prototype.h"

void partie_glouton_aleatoire(int taille, char *board)
{
	 char player_color; 
	 
    printf("\n\nWelcome to the 7 wonders of the world of the 7 colors\n"
	"*****************************************************\n\n"
	"Current board state:\n");
	
	
	generate_board(taille, board);
	int limite=taille*taille/2;
	
	while ((score('^',taille, board)<limite) && (score('v',taille, board)<limite) ){
		
		
		print_board();
		
		//Tour du joueur ^
		
		printf("\n à Aleatoire de jouer\n choisis A,B,C,D,E,F ou G");
		player_color=random_possible_color('v', board, taille);
		change_color('v',player_color, taille, board);
		
		pourcentage('v', taille, board); //Affichage de l'occupation
		
		
		
		print_board();
		//sleep(1);
		
		//Tour du joueur v
		
		printf("\n à Glouton de jouer\n choisis A,B,C,D,E,F ou G : ");
		player_color=glouton('^',board, taille);
		change_color('^',player_color, taille, board);
		
		pourcentage('^', taille, board); //Affichage de l'occupation
		
		//sleep(1);
		
	}
			
		//On regarde qui a gagne
		if (score('^',taille, board)>limite){
			print_board();
			printf("Glouton a gagné\n\n");
			
		}
		if (score('v',taille, board)>limite){
			print_board();
			printf("Aleatoire a gagné\n\n");
		}
}

