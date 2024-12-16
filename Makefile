binary: main gameClass
	g++ build/main.o build/game.o -lSDL2 -o build/TerraEngine

main: gameClass
	g++ src/main.cc -c -o build/main.o

gameClass: src/game.cc
	g++ src/game.cc -c -o build/game.o
