#include <iostream>

auto main () -> int{

int liczba1;
int liczba2;
int liczba3;

std::cout<<"Proszę podać 1 liczbe: ";
std::cin>>liczba1;
std::cout<<"Proszę podać 2 liczbe: ";
std::cin>>liczba2;
std::cout<<"Proszę podać 3 liczbe: ";
std::cin>>liczba3;

if (liczba1>liczba2 && liczba1>liczba3){
	std::cout<<"Największa jest 1 liczba. Wynosi ona: "<<liczba1<<"\n";
} else if (liczba2>liczba1 && liczba2>liczba3){
	std::cout<<"Największa jest 2 liczba. Wynosi ona: "<<liczba2<<"\n";
} else if (liczba3>liczba1 && liczba3>liczba2){
	std::cout<<"Największa jest 3 liczba. Wynosi ona: "<<liczba3<<"\n";
} else if (liczba1==liczba2 && liczba1>liczba3){
	std::cout<<"Największe są liczby 1 i 2. Wynoszą one: "<<liczba1<<"\n";
} else if (liczba1==liczba3 && liczba1>liczba2){
	std::cout<<"Największe są liczby 1 i 3. Wynoszą one: "<<liczba1<<"\n";
} else if (liczba2==liczba3 && liczba2>liczba1){
	std::cout<<"Największe są liczby 2 i 3. Wynoszą one: "<<liczba2<<"\n";
} else if (liczba1==liczba2 && liczba1==liczba3){
	std::cout<<"Wszystkie liczby są identyczne. Wynoszą one: "<<liczba1<<"\n";
}

return 0;

}
