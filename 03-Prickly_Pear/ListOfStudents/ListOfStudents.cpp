#include <iostream>
#include <string>
#include "List.h"

int main(){

system("clear");

Student s0("Igor ","Pieper");

int wybor, pech;
int student=1;
std::string imie1, nazwisko1;
std::string imie0[100];
std::string nazwisko0[100];

while(true){

	std::cout<<"1. Dodaj studenta\n";
	std::cout<<"2. Lista Studentów\n";
	std::cout<<"3. Usuń Studenta\n";
	std::cout<<"4. Wyłącz program\n";
	std::cout<<"Która opcja ciebie interesuje: ";	
	std::cin>>wybor;

	if(wybor==1){
		system("clear");

		std::cout<<"Podaj imię studenta: ";
		std::cin>>imie1;
		std::cout<<"Podaj nazwisko studenta: ";
		std::cin>>nazwisko1;

		Student s0(imie1,nazwisko1);
		imie0[student] = s0.imie;
		nazwisko0[student] = s0.nazwisko;
		student++;

	} else if (wybor==2){

		system("clear");

		for(int i=1; i<student;i++){
			
			if(imie0[i]!="null"){
				std::cout<<i<<". "<<imie0[i]<<" "<<nazwisko0[i]<<"\n";
			}
		}
		std::cout<<"\n";

	} else if (wybor==3){
		
		system("clear");		
		
		std::cout<<"Wybierz numer osoby, którą chcesz usunąć: ";
		std::cin>>pech;
		imie0[pech] = "null";
	} else if (wybor==4){
		break;
	}
}

return 0;

}

