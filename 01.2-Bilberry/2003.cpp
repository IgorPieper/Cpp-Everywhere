#include <iostream>
#include <math.h>

auto main () -> int{

int liczba1;
int liczba2;
int liczbaS;

std::cout<<"Proszę podać 1 liczbe: ";
std::cin>>liczba1;
std::cout<<"Proszę podać 2 liczbe: ";
std::cin>>liczba2;

while (true){	
	std::cout<<"Proszę podać 3 liczbe: ";
	std::cin>>liczbaS;

	if (liczbaS!=0){
		liczbaS = abs(liczbaS);
		break;
	}
}

if (liczba1>liczba2){
	for (int i=liczba2;i<=liczba1;i=i+liczbaS){	
		std::cout<<i<<" ";
	}
} else if (liczba2>liczba1){
	for (int i=liczba1;i<=liczba2;i=i+liczbaS){
		std::cout<<i<<" ";
	}
} else if (liczba1==liczba2){		
	std::cout<<liczba1;
}

std::cout<<"\n";
return 0;

}
