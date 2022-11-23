pp = g++
OBJS = main.o Energy.o Bladder.o Animal.o Food.o Fun.o Hunger.o Person.o Hygiene.o Needs.o Social.o Job.o

all: sims

sims: $(OBJS)
	$(pp) $(OBJS) -o a.out
	./a.out
	rm *.o

main.o: main.cpp 
	$(pp) -c main.cpp

Person.o: Person.cpp Person.hpp Needs.h Job.h
	$(pp) -c Person.cpp

Needs.o: Needs.cpp Needs.h Bladder.h Energy.h Fun.h Hunger.h Hygiene.h Social.hpp 
	$(pp) -c Needs.cpp

Job.o: Job.cpp Job.h
	$(pp) -c Job.cpp

Bladder.o: Bladder.cpp Bladder.h
	$(pp) -c Bladder.cpp

Hunger.o: Hunger.cpp Hunger.h
	$(pp) -c Hunger.cpp

Energy.o: Energy.cpp Energy.h
	$(pp) -c Energy.cpp

Fun.o: Fun.cpp Fun.h Animal.h
	$(pp) -c Fun.cpp

Social.o: Social.cpp Social.hpp
	$(pp) -c Social.cpp

Hygiene.o: Hygiene.cpp Hygiene.h 
	$(pp) -c Hygiene.cpp

Animal.o: Animal.cpp Animal.h
	$(pp) -c Animal.cpp

Food.o: Food.cpp Food.h
	$(pp) -c Food.cpp

clean:
	rm  *.o 
