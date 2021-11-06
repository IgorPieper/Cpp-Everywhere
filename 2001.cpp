#include <iostream>

auto main () -> int{

int liczba1;
int liczba2;

std::cout<<"Proszę podać 1 liczbe: ";
std::cin>>liczba1;
std::cout<<"Proszę podać 2 liczbe: ";
std::cin>>liczba2;

if (liczba1>liczba2){
	for (int i=liczba2;i<=liczba1;i++){
		std::cout<<i<<" ";
	}
} else if (liczba2>liczba1){
	for (int i=liczba1;i<=liczba2;i++){
		std::cout<<i<<" ";
	}
} else if (liczba1==liczba2){
	std::cout<<liczba1<<" ";
}

std::cout<<"\n";
return 0;

}
