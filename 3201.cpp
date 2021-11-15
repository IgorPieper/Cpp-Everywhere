#include <iostream>
#include <array>

auto main () -> int{

system("clear");

std::array<int, 100> ASCII;

for (int i=1; i<=94; i++){
	ASCII[i] = 32+i;
	std::cout<<char(ASCII[i])<<" ";
}

std::cout<<"\n\n";

return 0;

}
