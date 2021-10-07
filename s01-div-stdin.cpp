#include <iostream>
#include <string>

auto ask_user_for_intiger(std::string prompt) -> int{
	std::cout << prompt << " int: ";
	auto n = std::string{};
	std::getline(std::cin, n);
	return std::stoi(n);
}

auto main() -> int
{
	double const a = ask_user_for_intiger("a = ");
	double const b = ask_user_for_intiger("b = ");
	
	if (b == 0){
		std::cout << "Nie dzieli się przez zero!\n";
	}else{
		std::cout << (a / b) << "\n";
	}
	return 0;
}
