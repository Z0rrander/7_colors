int main(void)
{
     printf("\n\nWelcome to the 7 wonders of the world of the 7 colors\n"
	"*****************************************************\n\n"
	"Current board state:\n");
	
	char player_color;
	char c; //Pour la ligne qui vide le buffer du scanf
	
	generate_board(BOARD_SIZE, board);
	int limite=BOARD_SIZE*BOARD_SIZE/2;
	while ((score('^',BOARD_SIZE, board)<limite) && (score('v',BOARD_SIZE, board)<limite) ){
		print_board();
		
		// Tour du joueur ^
		
		printf("\n à '^' de jouer\n choisis A,B,C,D,E,F ou G : ");
		scanf("%c", &player_color );
		change_color('^',player_color, BOARD_SIZE, board);
		
		pourcentage('^', BOARD_SIZE, board); //Affichage de l'occupation
		
		
		
		print_board();
		
		while((c = getchar()) != '\n' && c != EOF){} //Pour vider le buffer du scanf
		
		//Tour du joueur v
		
		printf("\n à v de jouer\n choisis A,B,C,D,E,F ou G : ");
		scanf("%c", &player_color );
		change_color('v',player_color, BOARD_SIZE, board);
		
		pourcentage('v', BOARD_SIZE, board); //Affichage de l'occupation
		
		while((c = getchar()) != '\n' && c != EOF){} //Pour vider le buffer du scanf
		
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
