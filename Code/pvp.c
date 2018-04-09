#include <stdio.h>


int main(){
	 printf("\n\nWelcome to the 7 wonders of the world of the 7 colors\n"
	"*****************************************************\n\n"
	"Current board state:\n");
	
	char player_color;
	
	generate_board(BOARD_SIZE, *board);
	while (1){
		print_board();
		
		// Tour du joueur ^
		
		printf("\n à ^ de jouer\n choisis A,B,C,D,E,F ou G : ");
		scanf("%c", player_color );
		change_color("^",player_color, BOARD_SIZE, board);
		
		pourcentage("^", BOARD_SIZE, board); //Affichage de l'occupation
		
		if (score("^",BOARD_SIZE, board)>450){
			print_board();
			printf("^ à gagner");
			break;
		}
		print_board();
		
		//Tour du joueur v
		
		printf("\n à v de jouer\n choisis A,B,C,D,E,F ou G : ");
		scanf("%c", player_color );
		change_color("v",player_color, BOARD_SIZE, board);
		
		pourcentage("v", BOARD_SIZE, board); //Affichage de l'occupation
		
		if (score("v",BOARD_SIZE, board)>450){
			print_board();
			printf("v à gagner");
			break;
		}
	}
	return 0;
}
