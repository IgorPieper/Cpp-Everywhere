#include <iostream>

auto main () -> int{

int liczba;
int silnia=1;
int i=1;

std::cout<<"Podaj liczbę: ";
std::cin>>liczba;

do{
	silnia=silnia*i;
	i++;
}while(i<=liczba);

std::cout<<"Silnia = "<<silnia<<"\n";

return 0;

}
