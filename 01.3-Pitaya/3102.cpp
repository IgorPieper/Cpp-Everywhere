#include <iostream>
#include <math.h>


auto main () -> int{

int n, start;

while(true){
	std::cout<<"Proszę podać rozmiar tablicy: ";
	std::cin>>n;
	
	n=abs(n);
	
	if(n<=99){
		break;
	}
	std::cout<<"Proszę podać liczbę mniejszą od 100 i większą od -100\n";
}

std::cout<<"Od jakiej liczby mam rozpocząć odliczanie: ";
std::cin>>start;

int A[n];

for(int i=0;i<=n;i++){
	A[i]=start+i;
}

return 0;

}
