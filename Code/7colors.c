/* Template of the 7 wonders of the world of the 7 colors assigment. */

#include <stdio.h>     /* printf */
#include "prototype.h"

/* We want a 30x30 board game by default */
#define BOARD_SIZE 30

/** Represent the actual current board game
 *
 * NOTE: global variables are usually discouraged (plus encapsulation in
 *     an appropriate data structure would also be preferred), but don't worry.
 *     For this first assignment, no dinosaure will get you if you do that.
 */
char board[BOARD_SIZE * BOARD_SIZE] = { 0 }; // Filled with zeros

/** Retrieves the color of a given board cell */
char get_cell(int x, int y, char *board)
{
    return board[y * BOARD_SIZE + x];
}

/** Changes the color of a given board cell */
void set_cell(int x, int y, char color, char *board)
{
    board[y * BOARD_SIZE + x] = color;
}

/** Prints the current state of the board on screen
 *
 * Implementation note: It would be nicer to do this with ncurse or even
 * SDL/allegro, but this is not really the purpose of this assignment.
 */
 
void print_board(void)
{
    int i, j;
    for (i = 0; i < BOARD_SIZE; i++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            printf("%c", get_cell(i, j, board));
        }
        printf("\n");
    }
}

/** Program entry point */

int main(void)
{
     printf("\n\nWelcome to the 7 wonders of the world of the 7 colors\n"
	"*****************************************************\n\n"
	"Current board state:\n");
	
	char player_color;
	char c; //Pour la ligne qui vide le buffer du scanf
	
	generate_board(BOARD_SIZE, board);
	while ((score('^',BOARD_SIZE, board)<450) && (score('v',BOARD_SIZE, board)<450) ){
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
		if (score('^',BOARD_SIZE, board)>450){
			print_board();
			printf("^ a gagné");
			
		}
			if (score('v',BOARD_SIZE, board)>450){
			print_board();
			printf("v a gagné");
		}
	return 0;
}
