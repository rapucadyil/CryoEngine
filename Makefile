LIBS=-lsfml-graphics -lsfml-window -lsfml-system

all:
	g++ -c "src/main.cpp" -o main.o
	g++ -c "src/general/utils.cpp" -o utils.o
	g++ -c "src/ecs/cryo_entity.cpp" -o cryoentity.o
	g++ -c "src/systems/entity_system.cpp" -o enttsys.o
	g++ -c "src/ecs/components/cryo_component.cpp" -o cmps.o
	g++ -c "src/ecs/components/cryo_transform.cpp" -o trnsfrm.o
	g++ -c "src/systems/cryo_memory.cpp" -o crymem.o
	
	g++ -std=c++17 -ggdb -Iinclude -o cryoengine-app main.o utils.o cryoentity.o \
	 enttsys.o cmps.o trnsfrm.o crymem.o $(LIBS)

clean_exec:
	rm cryoengine-app

clean_out:
	rm *.o
