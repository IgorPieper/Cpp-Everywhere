#include <iostream>

class This{
public:
	int liczba;

	This(int li){
		liczba = li;
	}
	
	void Funkcja() const{
		std::cout<<"Wartość wskaźnika this: "<<this->liczba<<"\n";
	}

};

int main(){

system("clear");

This t1(64);

t1.Funkcja();

std::cout<<"Wartość pobrana ręcznie: "<<&t1.liczba<<"\n";

return 0;

}
