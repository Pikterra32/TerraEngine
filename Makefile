Binary: Game Main
	mkdir -p build
	g++ build/game.o build/main.o -lraylib -o build/TerraEngine

Game:
	g++ src/Game.cc -c -o build/game.o

Main:
	g++ src/Main.cc -c -o build/main.o
