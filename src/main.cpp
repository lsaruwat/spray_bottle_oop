#include "Bottle.h"
#include <iostream>
#include <memory>

using namespace std;

int main(int argc, char *argv[]){

	Bottle windex("Windex");
	Bottle coke("Coke");
	BottleSP dew(new Bottle("Mt. Dew"));

	Bottle *pepsi = new Bottle("Pepsi");

	windex.fill();
	coke.fill();
	pepsi->fill();
	pepsi->print();
	
	delete pepsi;

	return  0;
}