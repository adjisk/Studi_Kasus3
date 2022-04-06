#include <iostream>
#include <conio.h
#include <fstream>
#include "../library/proses2.h"

int main(){
	Proses proses;
	proses.getData();
	proses.toFile();
	
	getch();
	return 0;
}
