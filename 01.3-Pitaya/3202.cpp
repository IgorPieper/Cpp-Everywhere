#include <iostream>
#include <vector>
#include <math.h>

auto main () -> int{

system("clear");

std::vector<int> tablica;

int pomocnicza;

while (true){

	std::cout<<"Proszę podać liczbę: ";
	std::cin>>pomocnicza;
	
	if (pomocnicza>0 || pomocnicza<0){
		tablica.push_back(pomocnicza);
	} else if (pomocnicza==0){
		break;
	}

}
	
if (tablica.size()==0){
	return 0;
} else{
	for (int i=1;i<=tablica.size();i++){
			
		std::cout<<tablica[i-1]<<" ";
		
		if ((i-1)%5==0 && (i-1!=0)){
			std::cout<<"\n";
		}
	
	}
}


tablica.clear();
return 0;

}
