/**
* @file makefile
* @course 2.Ogretim B grubu
* @assignment 1.Odev
* @date 20.11.2024
* @author Yunus Emre Yýlmaz yunus.yilmaz18@ogr.sakarya.edu.tr
*/
all:derle bagla calistir
derle:
	g++ -c -I "./include" ./src/main.cpp -o ./lib/main.o
	g++ -c -I "./include" ./src/Gen.cpp -o ./lib/Gen.o
	g++ -c -I "./include" ./src/Kromozom.cpp -o ./lib/Kromozom.o
	g++ -c -I "./include" ./src/Hucre.cpp -o ./lib/Hucre.o
bagla:
	g++ ./lib/main.o ./lib/Gen.o ./lib/Kromozom.o  ./lib/Hucre.o -o./bin/program
calistir:
	./bin/program
