#include <iostream>

auto main () -> int{

int liczba;
int silnia=1;
int i=1;

std::cout<<"Podaj liczbę: ";
std::cin>>liczba;

while(i<=liczba){
	silnia=silnia*i;
	i++;
}

std::cout<<"Silnia = "<<silnia<<"\n";

return 0;

}
