#include <unistd.h>
#include "prototype.h"
#include <stdio.h>

void partie_joueur_aleatoire(int taille, char *board) {
	
	char player_color;
	char c; //Pour la ligne qui vide le buffer du scanf
	
	
	printf("\n\nWelcome to the 7 wonders of the world of the 7 colors\n"
	"*****************************************************\n\n"
	"Current board state:\n");
	
	
	generate_board(taille, board);
	int limite=taille*taille/2;
	while ((score('^',taille, board)<limite) && (score('v',taille, board)<limite) ){
		
		
		print_board();
		sleep(3); //Arrête le programme 3 secondes
		
		// Tour du joueur ^
		
		printf("\n à '^' de jouer\n choisis A,B,C,D,E,F ou G : ");
		player_color=random_possible_color('^', board, taille);
		change_color('^',player_color, taille, board);
		
		pourcentage('^', taille, board); //Affichage de l'occupation
		
		
		
		print_board();
		sleep(3); 
		
		while((c = getchar()) != '\n' && c != EOF){} 
		
		//Tour du joueur v
		
		printf("\n à v de jouer\n choisis A,B,C,D,E,F ou G : ");
		scanf("%c", &player_color );
		change_color('v',player_color, taille, board);
		
		pourcentage('v', taille, board); //Affichage de l'occupation
		
		while((c = getchar()) != '\n' && c != EOF){}
		
	}
			
		//On regarde qui a gagne
		if (score('^',taille, board)>limite){
			print_board();
			printf("^ a gagné");
			
		}
			if (score('v',taille, board)>limite){
			print_board();
			printf("v a gagné");
		}

}

