#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
	double const a = std::stoi(argv[1]);
	double const b = std::stoi(argv[2]);
	
	if (b == 0){
		std::cout << "Nie dzieli się przez zero!\n";
	}else{
		std::cout << (a / b) << "\n";
	}
	return 0;
}
