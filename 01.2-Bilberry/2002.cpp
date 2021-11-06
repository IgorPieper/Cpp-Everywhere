#include <iostream>

auto main () -> int{

int liczba1;
int liczba2;
int liczba3;

std::cout<<"Proszę podać 1 liczbe: ";
std::cin>>liczba1;
std::cout<<"Proszę podać 2 liczbe: ";
std::cin>>liczba2;

while (true){	
	std::cout<<"Proszę podać 3 liczbe: ";
	std::cin>>liczba3;

	if (liczba3!=0){
		break;
	}
}

if (liczba1>liczba2){
	for (int i=liczba2;i<=liczba1;i++){
		if (i%liczba3==0){		
			std::cout<<i<<" ";
		}
	}
} else if (liczba2>liczba1){
	for (int i=liczba1;i<=liczba2;i++){
		if (i%liczba3==0){		
			std::cout<<i<<" ";
		}
	}
} else if (liczba1==liczba2){
	if (liczba1%liczba3==0){		
			std::cout<<liczba1;
		}
}

std::cout<<"\n";
return 0;

}
