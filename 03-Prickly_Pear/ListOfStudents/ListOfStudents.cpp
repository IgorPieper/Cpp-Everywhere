#include <iostream>
#include <list>
#include "List.h"

std::list <Student> lista;

auto dodaj() -> void{

	std::string numer;
	std::string imie;
	std::string nazwisko;

	std::cout<<"Proszę podać numer studenta: ";
	std::cin>>numer;
	std::cout<<"Proszę podać imię studenta: ";
	std::cin>>imie;
	std::cout<<"Proszę podać nazwisko studenta: ";
	std::cin>>nazwisko;

	auto studencik = Student{numer, imie, nazwisko};
	lista.push_back(studencik);

	system("clear");
}

auto poka() -> void{
	
	for(std::list<Student>::iterator i=lista.begin(); i!=lista.end(); ++i){
		auto studencik = *i;
		studencik.to_string();
	}
	std::cout<<"\n\n";

}

auto usun() -> void{

	std::string num;
	
	poka();

	std::cout<<"Kogo chce Pani/Pan usunąć: ";
	std::cin>>num;

	auto usunn = Student{num};
	lista.remove(usunn);

	system("clear");

}

auto main() -> int{

system("clear");

int wybor;

while(true){

	std::cout<<"1. Dodaj studenta\n";
	std::cout<<"2. Lista Studentów\n";
	std::cout<<"3. Usuń Studenta\n";
	std::cout<<"4. Wyłącz program\n";
	std::cout<<"Która opcja ciebie interesuje: ";	
	std::cin>>wybor;

	if(wybor==1){
		system("clear");
		
		dodaj();
		
	} else if (wybor==2){
		system("clear");
		
		poka();

	} else if (wybor==3){
		system("clear");		

		usun();

	} else if (wybor==4){
		break;
	}
}

return 0;

}

