LIBS=-lsfml-graphics -lsfml-window -lsfml-system

all:
	g++ -c "src/main.cpp" -o main.o
	g++ -c "src/ecs/entity.cpp" -o entity.o
	g++ -c "src/systems/entity_system.cpp" -o enttsys.o
	g++ -c "src/ecs/components/component.cpp" -o cmps.o
	g++ -c "src/ecs/components/transform.cpp" -o trnsfrm.o
	
	g++ -std=c++17 -ggdb -Iinclude -o cryoengine-app main.o entity.o \
	 enttsys.o cmps.o trnsfrm.o $(LIBS)

clean_exec:
	rm cryoengine-app

clean_out:
	rm *.o
