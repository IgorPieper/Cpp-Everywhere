#include <iostream>

auto main () -> int{

int wysokosc;

std::cout<<"Wysokość prostokąta wynosi: ";
std::cin>>wysokosc;

for (int i=1;i<=wysokosc;i++){
	for(int ii=wysokosc;ii>=i;ii--){
		std::cout<<"* ";
	}
	std::cout<<"\n";
}

return 0;

}
