# In  order  to  execute  this  "Makefile " just  type  "make "
OBJS     = main.o List.o Node.o Random.o Centroid.o Cluster.o ClusterEuclidean.o Space.o PointerList.o Pointer.o
SOURCE   = main.cpp List.cpp Node.cpp Random.cpp Centroid.cpp ClusterEuclidean.cpp Space.cpp PointerList.cpp Pointer.cpp
HEADER   = List.h Node.h Random.h Centroid.h Cluster.h ClusterEuclidean.h Space.h PointerList.h Pointer.h
OUT      = medoids
CC       = g++
FLAGS    = -g -c
# -g  option  enables  debugging  mode
# -c flag  generates  object  code  for  separate  files
all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT)
#  create/ compile  the  individual  files  >> separately <<

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp

List.o: List.cpp List.h
	$(CC) $(FLAGS) List.cpp

Node.o: Node.cpp Node.h
	$(CC) $(FLAGS) Node.cpp

PointerList.o: PointerList.cpp PointerList.h
	$(CC) $(FLAGS) PointerList.cpp

Pointer.o: Pointer.cpp Pointer.h
	$(CC) $(FLAGS) Pointer.cpp

Random.o: Random.cpp Random.h
	$(CC) $(FLAGS) Random.cpp

Centroid.o: Centroid.cpp Centroid.h
	$(CC) $(FLAGS) Centroid.cpp

Cluster.o: Cluster.cpp Cluster.h
	$(CC) $(FLAGS) Cluster.cpp

ClusterEuclidean.o: ClusterEuclidean.cpp ClusterEuclidean.h
	$(CC) $(FLAGS) ClusterEuclidean.cpp

Space.o: Space.cpp Space.h
	$(CC) $(FLAGS) Space.cpp

#  clean  house
clean :
	rm -f $(OBJS) $(OUT)
