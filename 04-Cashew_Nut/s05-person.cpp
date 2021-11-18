#include <iostream>
#include "Person.h"

int ktoo;

void Kto(){
	while(true){
		std::cout<<"1. Mr\n";
		std::cout<<"2. Mrs\n";
		std::cout<<"3. King\n";
		std::cout<<"4. Queen\n";
		std::cout<<"Kto Pana/Panią interesuje: ";
		std::cin>>ktoo;
		
		if (ktoo>0 && ktoo<5){
			break;
		}
		system("clear");
	}

}

auto main () -> int{

system("clear");

int wybor;

Mr osoba1("Jan", "Brzęczyszczykiewicz");
Mrs osoba2("Janina", "Brzęczyszczykiewiczówna");
King osoba3("Jan 3", "Brzęczyszczykiewski");
Queen osoba4("Jadwiga", "Brzęczyska");

while(true){

	std::cout<<"1. Proszę mi powiedzieć kto jest kim\n";
	std::cout<<"2. Jest rano a Ja chcę przywitać ...\n";
	std::cout<<"3. Jest wieczór a Ja chcę przywitać ...\n";
	std::cout<<"4. Chciałbym pożegnać ...\n";
	std::cout<<"5. Nic mnie nie interesuje\n\n";
	std::cout<<"Co Pana/Panią interesuje: ";
	std::cin>>wybor;

	if (wybor==1){
		system("clear");
		osoba1.who_is_it();
		osoba2.who_is_it();
		osoba3.who_is_it();
		osoba4.who_is_it();
	} else if (wybor==2) {

		system("clear");
		Hello hello;
		Kto();

		if (ktoo==1){
			std::cout<<"\n";
			hello.greet();
			osoba1.who_is_it();
		} else if (ktoo==2){
			std::cout<<"\n";
			hello.greet();
			osoba2.who_is_it();
		} else if (ktoo==3){
			std::cout<<"\n";
			hello.greet();
			osoba3.who_is_it();
		} else if (ktoo==4){
			std::cout<<"\n";
			hello.greet();
			osoba4.who_is_it();
		}

	} else if (wybor==3) {
		
		system("clear");
		Good_evening hello;
		Kto();

		if (ktoo==1){
			std::cout<<"\n";
			hello.greet();
			osoba1.who_is_it();
		} else if (ktoo==2){
			std::cout<<"\n";
			hello.greet();
			osoba2.who_is_it();
		} else if (ktoo==3){
			std::cout<<"\n";
			hello.greet();
			osoba3.who_is_it();
		} else if (ktoo==4){
			std::cout<<"\n";
			hello.greet();
			osoba4.who_is_it();
		}

	} else if (wybor==4) {

		system("clear");
		Farewell hello;
		Kto();

		if (ktoo==1){
			std::cout<<"\n";
			hello.greet();
			osoba1.who_is_it();
		} else if (ktoo==2){
			std::cout<<"\n";
			hello.greet();
			osoba2.who_is_it();
		} else if (ktoo==3){
			std::cout<<"\n";
			hello.greet();
			osoba3.who_is_it();
		} else if (ktoo==4){
			std::cout<<"\n";
			hello.greet();
			osoba4.who_is_it();
		}

	} else if (wybor==5) {
		break;
	}
}

return 0;

}
