LIBS = -lm

solveQuad :	quadFunctions


quadFunctions:  main.o discrim.o input.o output.o \
		quadSolver.o root.o 
		gcc -o  solveQuad main.o discriminant.o input.o \
			output.o quadSolver.o root.o -lm

main.o :	main.c quadFunctions.h
		gcc -c -lm main.c -lm

discrim.o :	discriminant.c discriminant.h
		gcc -c  discriminant.c -lm

input.o :	input.c input.h
		gcc -c input.c

output.o : 	output.c output.h
		gcc -c output.c -lm

quadSolver.o :  quadSolver.c quadSolver.h root.h input.h discriminant.h
		gcc -c -lm quadSolver.c -lm

root.o : 	root.c root.h discriminant.h 
		gcc -c -lm root.c -lm

clean : 
		rm solveQuad main.o discrim.o input.o output.o \ 			   quadSolver.o root.o 
