all: bin/Game15

bin/Game15: build/main.o build/board.o build/randomizer.o build/game.o build/checkWin.o
	gcc -Wall -Werror build/main.o build/board.o build/randomizer.o build/game.o build/checkWin.o -o bin/Game15

build/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/main.o

build/board.o: src/board.c
	gcc -Wall -Werror -c src/board.c -o build/board.o

build/randomizer.o: src/randomizer.c
	gcc -Wall -Werror -c src/randomizer.c -o build/randomizer.o

build/game.o: src/game.c
	gcc -Wall -Werror -c src/game.c -o build/game.o

build/checkWin.o: src/checkWin.c
	gcc -Wall -Werror -c src/checkWin.c -o build/checkWin.o

clean:
	rm -rf build/*.o bin/Game15