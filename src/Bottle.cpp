#include "Bottle.h"
#include <iostream>


Bottle::Bottle(std::string _name){
	name = _name;
	liquidVolumePercent = 100.0;
}

Bottle::Bottle(std::string _name,float _liquidVolumePercent){
	liquidVolumePercent = _liquidVolumePercent;
}

Bottle::~Bottle(){
	std::cout << "Gozor smites " << name << std::endl;
}


void Bottle::fill(){

	liquidVolumePercent = 100.0;

	std::cout << "bottle filled to " << liquidVolumePercent << std::endl;
}


/*class Bottle{

	Bottle(){
		float liquidVolumePercent = 100.0;
		bool empty = false;
	}

	void fill(float addLiquid){
		this->liquidVolumePercent = 100.0;
		this->empty = false;
	}
};*/