#include <iostream>
#include <string>

class SprayBottle::Bottle{
	
	SprayBottle(){
		this->Bottle();
	}

	void spray(){
		if(this->water > 0){
			cout<<"spraying..."<<endl;
			this->water-=1;
		}
		else{
			cout<<"Out of water please refill"<<endl;
		}
	}
};

windex = new SprayBottle();

windex.spray();