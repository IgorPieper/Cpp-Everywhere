#include <iostream>
#include <math.h>


auto main () -> int{

int k;

std::cout<<"Proszę podać koniec zakresu: ";
std::cin>>k;	
k=abs(k);

int A[50];

srand(time(NULL));

for(int i=0;i<50;i++){
	A[i]=rand()%k;
	std::cout<<A[i]<<"\n";
}

return 0;

}
