#include <iostream>

auto main () -> int{

int liczba;
int silnia=1;

std::cout<<"Podaj liczbę: ";
std::cin>>liczba;

for(int i=1;i<=liczba;i++){
	silnia=silnia*i;
}
std::cout<<"Silnia = "<<silnia<<"\n";

return 0;

}
