
all:LAB
	g++ main.cpp -lGL -lGLU -lglut -o maze -Wall
	
LAB:
	g++ main.cpp -lGL -lGLU -lglut -o maze
