Binary: Game Main Objects Renderer Utility
	g++ build/game.o build/main.o build/objects.o build/renderengine.o build/vec.o -lraylib -o build/TerraEngine

Game:
	mkdir -p build
	g++ src/Game.cc -c -o build/game.o

Main:
	g++ src/Main.cc -c -o build/main.o

Objects:
	make -f src/Objects/Makefile

Renderer:
	make -f src/Renderer/Makefile

Utility:
	g++ src/Utility/Vector.cc -c -o build/vec.o
