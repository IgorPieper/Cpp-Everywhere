#include <iostream>

auto main () -> int{

srand(time(NULL));
int zgadnij = rand() % 100 + 1;

std::cout<<zgadnij<<"\n";

int liczba;

do{
std::cout<<"guess: ";
std::cin>>liczba;

	if (liczba>zgadnij){
		std::cout<<"number too big!\n";
	}else if (liczba<zgadnij){
		std::cout<<"number too small!\n";
	}else if (liczba == zgadnij){
		break;
	}

}while (true);

std::cout<<"just right!";

return 0;

}
