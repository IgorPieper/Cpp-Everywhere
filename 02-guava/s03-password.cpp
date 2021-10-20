#include <iostream>
#include <string>


auto main (int argc, char* argv[]) -> int{

std::string haslo2;
std::string haslo = argv[1];

do{

std::cout<<"password: ";
std::cin>>haslo2;

} while (haslo2 != haslo);

std::cout<<"ok!\n";

return 0;

}
