all: bin/Game15 bin/Game15-test

bin/Game15: build/src/main.o build/src/board.o build/src/randomizer.o build/src/game.o build/src/checkWin.o
	gcc -Wall -Werror build/src/main.o build/src/board.o build/src/randomizer.o build/src/game.o build/src/checkWin.o -o bin/Game15

build/src/main.o: src/main.c
	gcc -Wall -Werror -I src -c src/main.c -o build/src/main.o

build/src/board.o: src/board.c
	gcc -Wall -Werror -I src -c src/board.c -o build/src/board.o

build/src/randomizer.o: src/randomizer.c
	gcc -Wall -Werror -I src -c src/randomizer.c -o build/src/randomizer.o

build/src/game.o: src/game.c
	gcc -Wall -Werror -I src -c src/game.c -o build/src/game.o

build/src/checkWin.o: src/checkWin.c
	gcc -Wall -Werror -I src -c src/checkWin.c -o build/src/checkWin.o

bin/Game15-test: build/test/main.o build/test/test.o build/src/checkWin.o
	gcc -Wall -Werror build/test/main.o build/test/test.o build/src/checkWin.o -o bin/Game15-test

build/test/main.o: thirdparty/ctest.h
	gcc -Wall -Werror -I thirdparty -c test/main.c -o build/test/main.o

build/test/test.o: src/function.h thirdparty/ctest.h
	gcc -Wall -Werror -I thirdparty -I src -c test/test.c -o build/test/test.o

testRun:
	./bin/Game15-test

clean:
	rm -rf build/test/*.o build/src/*.o bin/Game15 bin/Game15-test

.PHONY: all clean