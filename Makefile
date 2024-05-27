main: arithmetic.o main.o
	clang++ -fmodules-ts -fprebuilt-module-path=. arithmetic.o main.o -o main


arithmetic.o: arithmetic.pcm
	clang++ -fmodules-ts -c arithmetic.pcm	-o arithmetic.o

main.o: main.cpp
	clang++ -fmodules-ts -fprebuilt-module-path=. -c main.cpp -o main.o

arithmetic.pcm: arithmetic.cppm
	clang++ -fmodules-ts --precompile arithmetic.cppm -o arithmetic.pcm

clean:
	rm -rf arithmetic.pcm *.o main
