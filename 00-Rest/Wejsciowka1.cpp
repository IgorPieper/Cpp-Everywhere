#include <iostream>

auto main () -> int{

int wielkosc;

std::cout<<"Proszę podać wielkość: ";
std::cin>>wielkosc;

int wielkosc1 = wielkosc;
int wielkosc2 = wielkosc;
int wielkosc3 = 1;

for (int i=1;i<=wielkosc;i++){
	
	for (int ii=1;ii<=wielkosc1;ii++){
		std::cout<<"-";
	}
	wielkosc1--;

	for (int a=1;a<=wielkosc3;a++){
		std::cout<<"#";
	}
	wielkosc3 = wielkosc3 + 2;
	
	for (int iii=1;iii<=wielkosc2;iii++){
		std::cout<<"-";
	}
	wielkosc2--;

	std::cout<<"\n";
}

return 0;

}
