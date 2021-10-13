#include <iostream>
#include <string>

auto main (int argc, char* argv[]) -> int{

int piwa = 99;

if(argc>1){
	piwa = std::stoi(argv[1]);
}

int pocz_piwa = piwa;

do{

std::cout<<piwa<<" bottles of beer on the wall, "<<piwa<<" bottles of beer.\n";
std::cout<<"Take one down, pass it around, ";

piwa--;

}while (piwa !=1);

std::cout<<"1 bottle of beer on the wall, 1 bottle of beer.\n";
std::cout<<"No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, "<< pocz_piwa<< " bottles of beer on the wall...\n";

return 0;

}
