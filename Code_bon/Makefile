all: 7colors

7colors: 7colors.o generate_board.o score.o pourcentage.o change_color.o char_to_int.o glouton.o bon_glouton.o hegemonique.o partie_glouton_aleatoire.o partie_joueur_aleatoire.o partie_pvp.o random_color.o random_possible_color.o glouton_prevoyant.o
	gcc 7colors.o generate_board.o score.o pourcentage.o change_color.o char_to_int.o glouton.o bon_glouton.o hegemonique.o partie_glouton_aleatoire.o partie_joueur_aleatoire.o partie_pvp.o random_color.o random_possible_color.o -o 7colors

7colors.o: 7colors.c prototype.h
	gcc -Wall -Werror -Wextra -Wno-unused-function -Wno-unused-parameter 7colors.c -c -g
generate_board.o: generate_board.c prototype.h
	gcc -Wall -Werror -Wextra -Wno-unused-function -Wno-unused-parameter generate_board.c -c -g
score.o: score.c prototype.h
	gcc -Wall -Werror -Wextra -Wno-unused-function -Wno-unused-parameter score.c -c -g
pourcentage.o: pourcentage.c prototype.h
	gcc -Wall -Werror -Wextra -Wno-unused-function -Wno-unused-parameter pourcentage.c -c -g
change_color.o: change_color.c prototype.h
	gcc -Wall -Werror -Wextra -Wno-unused-function -Wno-unused-parameter change_color.c -c -g
char_to_int.o: char_to_int.c prototype.h
	gcc -Wall -Werror -Wextra -Wno-unused-function -Wno-unused-parameter char_to_int.c -c -g
bon_glouton.o: bon_glouton.c prototype.h
	gcc -Wall -Werror -Wextra -Wno-unused-function -Wno-unused-parameter bon_glouton.c -c -g
hegemonique.o: hegemonique.c prototype.h
	gcc -Wall -Werror -Wextra -Wno-unused-function -Wno-unused-parameter hegemonique.c -c -g
partie_glouton_aleatoire.o: partie_glouton_aleatoire.c prototype.h
	gcc -Wall -Werror -Wextra -Wno-unused-function -Wno-unused-parameter partie_glouton_aleatoire.c -c -g
partie_joueur_aleatoire.o: partie_joueur_aleatoire.c prototype.h
	gcc -Wall -Werror -Wextra -Wno-unused-function -Wno-unused-parameter partie_joueur_aleatoire.c -c -g
partie_pvp.o: partie_pvp.c prototype.h
	gcc -Wall -Werror -Wextra -Wno-unused-function -Wno-unused-parameter partie_pvp.c -c -g
random_color.o: random_color.c prototype.h
	gcc -Wall -Werror -Wextra -Wno-unused-function -Wno-unused-parameter random_color.c -c -g
random_possible_color.o: random_possible_color.c prototype.h
	gcc -Wall -Werror -Wextra -Wno-unused-function -Wno-unused-parameter random_possible_color.c -c -g
glouton_prevoyant.o: glouton_prevoyant.c prototype.h
	gcc -Wall -Werror -Wextra -Wno-unused-function -Wno-unused-parameter glouton_prevoyant.c -c -g
glouton.o: glouton.c prototype.h
	gcc -Wall -Werror -Wextra -Wno-unused-function -Wno-unused-parameter glouton.c -c -g
