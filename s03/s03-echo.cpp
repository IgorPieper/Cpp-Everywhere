#include <iostream>
#include <string>

auto main (int argc, char* argv[]) -> int{

std::string argument1 = argv[1];
std::string argument2 = argv[2];

for(int i = 1; i< argc; i++){

	if (argument1=="-r"){
		std::cout<<argv[argc - i];
		if (argument2 == "-n"){
			std::cout<<" ";
		}else if (argument2 == "-l"){
			std::cout<<"\n";
		}else if (argument2 == "-n"){
			std::cout<<" ";
		}else{
			std::cout<<" ";
		}
	}else if(argument1=="-n"){		
		std::cout<<argv[i]<<" ";
	}else if(argument1=="-l"){
		std::cout<<argv[i]<<" \n";
	}else{
		std::cout<<argv[i]<<" ";
	}
}
return 0;

}
