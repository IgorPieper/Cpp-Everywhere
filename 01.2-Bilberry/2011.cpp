#include <iostream>

auto main () -> int{

int wysokosc;
int szerokosc;

std::cout<<"Wysokość prostokąta wynosi: ";
std::cin>>wysokosc;
std::cout<<"Szerokość prostokąta wynosi: ";
std::cin>>szerokosc;

for (int i=1;i<=wysokosc;i++){
	for(int ii=1;ii<=szerokosc;ii++){
		std::cout<<"* ";
	}
	std::cout<<"\n";
}

return 0;

}
