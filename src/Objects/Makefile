Objects: SolidObject BaseObject ObjectManager PhysicalObject
	ld -r build/solidobject.o build/baseobject.o build/omanager.o build/physicalobject.o -o build/objects.o

SolidObject:
	g++ src/Objects/SolidObject.cc -c -o build/solidobject.o

BaseObject:
	g++ src/Objects/BaseObject.cc -c -o build/baseobject.o

ObjectManager:
	g++ src/Objects/ObjectManager.cc -c -o build/omanager.o

PhysicalObject:
	g++ src/Objects/PhysicalObject.cc -c -o build/physicalobject.o
