#pragma once

#include <string>
#include <iostream>
#include <memory>

class SprayBottle{
	public: SprayBottle(std::string _name);
	public: SprayBottle(std::string _name, float _liquidVolumePercent);
	public: ~SprayBottle();
	public: float liquidVolumePercent;
	public: std::string name;
	public: bool empty;
	public: void fill();

};