#include <iostream>
#include <string>

class Destruction{

	std::string dest;

public:

	Destruction(std::string s){
		dest = s;
	}

	~Destruction(){
		std::cout<<"DESTRUCTION! "<<dest;
	}

};

int main(){

std::string slowo;

std::cout<<"Co chcesz powiedzieć: ";
std::cin>>slowo;

Destruction d1(slowo);



return 0;

}
