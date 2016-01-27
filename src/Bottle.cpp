#include "Bottle.h"
#include <iostream>


Bottle::Bottle(std::string _name){
	name = _name;
	liquidVolumePercent = 100.0;
	std::cout << "Bottle " << name << " created."<< std::endl;
}

Bottle::Bottle(std::string _name,float _liquidVolumePercent){
	liquidVolumePercent = _liquidVolumePercent;
	std::cout << "Bottle " << name << " created."<< std::endl;
}

Bottle::~Bottle(){
	std::cout << "Bottle " << name << " destroyed" << std::endl;
}


void Bottle::fill(){

	liquidVolumePercent = 100.0;

	std::cout << "Bottle " << name << " filled to " << liquidVolumePercent << std::endl;
}

void Bottle::print(std::ostream &out) const{
	std::cout << "Bottle " << name << " filled to " << liquidVolumePercent << std::endl;
}