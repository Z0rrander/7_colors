/* Template of the 7 wonders of the world of the 7 colors assigment. */

#include <stdio.h>     
#include "prototype.h"
#include <unistd.h>

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
     int choix_partie;
     char c; //Pour la ligne qui vide le buffer du scanf	
     
     
	
     printf("Bonjour, quelle type de partie voulez-vous jouer ?\n");
     printf("1 : joueur contre joueur\n");
     printf("2 : Joueur contre aleatoire\n");
     printf("3 : joueur glouton contre aléatoire\n");
     printf("Entrez le numéro du type de partie : ");
     
     scanf("%d", &choix_partie);
     
     int choix = choix_partie;
     
     while((c = getchar()) != '\n' && c != EOF){} //Pour vider le buffer du scanf
     
     
     if (choix == 1){
		partie_pvp(BOARD_SIZE, board);
	}	
	
	else if (choix == 2){
			partie_joueur_aleatoire(BOARD_SIZE, board);
	}
	else if (choix == 3){
		partie_glouton_aleatoire(BOARD_SIZE, board);
	}
	
	return 0;
}

