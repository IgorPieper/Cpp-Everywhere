#include <iostream>

auto main () -> int{

int liczba1;

std::cout<<"Proszę podać 1 liczbe: ";
std::cin>>liczba1;

if (liczba1>0){
	std::cout<<"Liczba jest dodatnia. Kod wykonania wynosi: 1\n";
} else if (liczba1==0){
	std::cout<<"Liczba jest zerem. Kod wykonania wynosi: 0\n";
} else if (liczba1<0){
	std::cout<<"Liczba jest ujemna. Kod wykonania wynosi: -1\n";
}


return 0;

}
