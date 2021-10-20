#include <iostream>
#include <string>
#include <math.h>

auto main (int argc, char* argv[]) -> int{

float liczba1 = std::stoi(argv[1]);
float liczba2 = std::stoi(argv[2]);
std::string symbol = argv[3];

if (symbol == "+"){
	std::cout<<liczba1 + liczba2;
} else if (symbol == "-"){
	std::cout<<liczba1 - liczba2;
} else if (symbol == "*" || symbol=="x"){
	std::cout<<liczba1 * liczba2;
} else if (symbol == "/"){
	if(liczba2==0){
		std::cout<<"Przez zero nie dzielimy";
	}else{
		std::cout<<liczba1 / liczba2;
	}
} else if (symbol == "//"){
	std::cout<<floor(liczba1 / liczba2);
} else if (symbol == "%"){
	int liczba3 = std::stoi(argv[1]);
	int liczba4 = std::stoi(argv[2]);
	std::cout<<liczba3 % liczba4;
} else if (symbol == "**"){
	std::cout<<pow(liczba1, liczba2);
} else if (symbol == "sqrt"){
	std::cout<<sqrt(liczba1);
} else if (symbol == "log"){
	
	if (liczba1 > 0){
		std::cout<<log10(liczba1);
	} else{
		std::cout<<"Proszę podać liczbę większą od 0";
	}
}

return 0;

}
