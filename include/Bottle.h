#pragma once

#include <string>

class Bottle{
	public: Bottle(std::string _name);
	public: Bottle(std::string _name, float _liquidVolumePercent);
	public: ~Bottle(); 
	public: float liquidVolumePercent;
	public: std::string name;
	public: bool empty;
	public: void fill();

};