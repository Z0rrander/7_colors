#include <unistd.h>


int main(void)
{
     printf("\n\nWelcome to the 7 wonders of the world of the 7 colors\n"
	"*****************************************************\n\n"
	"Current board state:\n");
	
	char player_color;
	
	generate_board(BOARD_SIZE, board);
	int limite=BOARD_SIZE*BOARD_SIZE/2;
	while ((score('^',BOARD_SIZE, board)<limite) && (score('v',BOARD_SIZE, board)<limite) ){
		print_board();
		sleep(3); //Arrête le programme 3 seconde
		// Tour du joueur ^
		
		printf("\n à '^' de jouer\n choisis A,B,C,D,E,F ou G : ");
		player_color=random_possible_color('^', board, BOARD_SIZE);
		change_color('^',player_color, BOARD_SIZE, board);
		
		pourcentage('^', BOARD_SIZE, board); //Affichage de l'occupation
		
		
		
		print_board();
		sleep(3); 
		
		
		//Tour du joueur v
		
		printf("\n à v de jouer\n choisis A,B,C,D,E,F ou G : ");
		player_color=glouton('^', board, BOARD_SIZE);
		change_color('v',player_color, BOARD_SIZE, board);
		
		pourcentage('v', BOARD_SIZE, board); //Affichage de l'occupation
		
		
	}
			
		//On regarde qui a gagne
		if (score('^',BOARD_SIZE, board)>limite){
			print_board();
			printf("^ a gagné");
			
		}
			if (score('v',BOARD_SIZE, board)>limite){
			print_board();
			printf("v a gagné");
		}
	return 0;
}
