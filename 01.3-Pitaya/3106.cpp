#include <iostream>
#include <math.h>


auto main () -> int{

int n, szukl, ixsz=-1;

std::cout<<"Proszę podać rozmiar tablicy: ";
std::cin>>n;	
n=abs(n);

std::cout<<"Proszę podać szukaną liczbę: ";
std::cin>>szukl;

int A[n];

for(int i=0;i<=n;i++){
	A[i]=i+5;
}

for(int i=0;i<=n;i++){
	if(A[i]==szukl){
		ixsz=i;
	}
	
}

std::cout<<"Index szukanej liczby w tablicy: "<<ixsz<<"\n";

return 0;

}
