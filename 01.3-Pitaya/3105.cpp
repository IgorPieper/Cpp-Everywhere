#include <iostream>
#include <math.h>


auto main () -> int{

int n, najw=0, najm=0, ixw, ixm;

std::cout<<"Proszę podać rozmiar tablicy: ";
std::cin>>n;	
n=abs(n);

int A[n];

for(int i=0;i<=n;i++){
	A[i]=i;
}

for(int i=0;i<=n;i++){
	if(A[i]>najw){
		najw=A[i];
		ixw=i;
	}
	if(A[i]<=najm){
		najm=A[i];
		ixm=i;
	}
}

std::cout<<"Index najmniejszej liczby w tablicy: "<<ixm<<"\n";
std::cout<<"Index największej liczby w tablicy: "<<ixw<<"\n";

return 0;

}
