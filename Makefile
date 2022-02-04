LIBS=-lsfml-graphics -lsfml-window -lsfml-system

all:
	g++ -c "src/main.cpp" -o main.o
	g++ -c "src/utils.cpp" -o utils.o
	g++ -c "src/ecs/cryo_entity.cpp" -o cryoentity.o
	g++ -c "src/systems/entity_system.cpp" -o enttsys.o
	g++ -std=c++17 -ggdb -Iinclude -o cryoengine-app main.o utils.o cryoentity.o enttsys.o $(LIBS)

clean_exec:
	rm cryoengine-app

clean_out:
	rm *.o
