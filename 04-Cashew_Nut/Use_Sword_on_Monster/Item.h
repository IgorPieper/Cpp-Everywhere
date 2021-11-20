#ifndef item_h
#define item_h


class Creature{
public:
	std::string nazwa;
	int zycie;

	Creature(std::string nazwa1, int zycie1){
		nazwa = nazwa1;
		zycie = zycie1;
	};

	void show(){		
		
		std::cout<<"\33[1;31m"<<nazwa<<" HP: "<< zycie<<"\n\n\33[0m";
	}
};

class Item{
public:

	virtual void use_on(Creature& beast1) = 0;
	virtual void strength() = 0;

}; 

class Weapon :public Item{
public:
	std::string nazwa;
	int sila;

	Weapon(std::string nazwa1, int sila1){
		nazwa = nazwa1;
		sila = sila1;
	}

	virtual void use_on(Creature& beast1){
		system("clear");
		beast1.zycie = beast1.zycie - sila;
	};

	virtual void strength(){
		std::cout<<nazwa<<" atak: "<< sila<<"\n";
	};

};

class Potion :public Item{
public:
	std::string nazwa;
	int sila;
	int uzycia = 1;

	Potion(std::string nazwa1, int sila1){
		nazwa = nazwa1;
		sila = sila1;
	}

	virtual void use_on(Creature& beast1){
		system("clear");
		if(uzycia<1){
			std::cout<<"Mikstura nie wywołała żadnego efektu\n\n";
		} else {
			beast1.zycie = beast1.zycie + sila;
			uzycia--;
		}
	};

	virtual void strength(){
		std::cout<<"\33[1;33m"<<nazwa<<"\33[0m leczy: "<< sila<<" ilość: "<<uzycia<<"\n";
	};


};

#endif
