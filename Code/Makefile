all: 7colors

7colors: 7colors.o generate_board.o score.o pourcentage.o change_color.o
	gcc 7colors.o generate_board.o score.o pourcentage.o change_color.o -o 7colors

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

