#pragma once

#include <string>
#include <iostream>
#include <memory>

class Bottle{
	public: Bottle(std::string _name);
	public: Bottle(std::string _name, float _liquidVolumePercent);
	public: ~Bottle(); 
	public: float liquidVolumePercent;
	public: std::string name;
	public: bool empty;
	public: void fill();
	public: void print(std::ostream &out=std::cout) const;

};


typedef std::shared_ptr<Bottle> BottleSP;