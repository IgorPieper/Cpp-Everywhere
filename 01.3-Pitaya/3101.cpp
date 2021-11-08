#include <iostream>
#include <math.h>


auto main () -> int{

int n;

while(true){
	std::cout<<"Proszę podać rozmiar tablicy: ";
	std::cin>>n;
	n=abs(n);
	
	if(n<=99){
		break;
	}
	std::cout<<"Proszę podać liczbę mniejszą od 100 i większą od -100\n";
}

int A[n];

for(int i=0;i<=n;i++){
	A[i]=0;
}

return 0;

}
