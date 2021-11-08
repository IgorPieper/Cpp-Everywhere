#include <iostream>
#include <math.h>


auto main () -> int{

int n, suma=0;

std::cout<<"Proszę podać rozmiar tablicy: ";
std::cin>>n;	
n=abs(n);

int A[n];

for(int i=0;i<=n;i++){
	A[i]=i;
	suma+=A[i];
}

std::cout<<suma<<"\n";

return 0;

}
