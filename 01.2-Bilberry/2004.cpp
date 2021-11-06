#include <iostream>
#include <math.h>

auto main () -> int{

int liczba1;
int poczatek=2;

while (true){	
	std::cout<<"Proszę podać liczbe: ";
	std::cin>>liczba1;

	if (liczba1 != 0){
		liczba1 = abs(liczba1);
		break;
	}
}

if (liczba1==1 || liczba1==2 || liczba1==3){
	std::cout<<"Podana liczba jest liczbą pierwszą\n";
} else{
	while(true){
		if(liczba1%poczatek==0){
			std::cout<<"Podana liczba nie jest liczbą pierwszą\n";
			break;
		}
		poczatek++;
		if(poczatek>=(liczba1/2)){
			std::cout<<"Podana liczba jest liczbą pierwszą\n";
			break;
		}
	}
}

return 0;

}
