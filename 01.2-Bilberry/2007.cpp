#include <iostream>
#include <math.h>

auto main () -> int{

int limit, dzielnik, suma=0;
while(true){
	std::cout<<"Proszę podać limit: ";
	std::cin>>limit;
	std::cout<<"Proszę podać dzielnik: ";
	std::cin>>dzielnik;
	
	if(limit>=1 && dzielnik>=1 && dzielnik<=limit){
		break;
	}
	system("clear");
	std::cout<<"Zasady:\n1.Limit musi być większy od 0\n2.Dzielnik musi być większy od 0\n3.Limit musi być większy bądź równy dzielnikowi\n\n";
}

for(int i=1;i<=limit;i++){
	if(i%dzielnik==0){	
		suma+=i;
	}
}

std::cout<<suma<<"\n";
return 0;

}
