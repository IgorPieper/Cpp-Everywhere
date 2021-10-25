#include <iostream>
#include "Time.h"

int main (){

int wybor;

system("clear");

czas s1(22, 58, 58);
s1.to_string();
std::cout<<"\n";

while (true){
	
	std::cout<<"Aby dodać godzinę wpisz 1\n";
	std::cout<<"Aby dodać minutę wpisz 2\n";
	std::cout<<"Aby dodać sekundę wpisz 3\n";
	std::cout<<"Aby sprawdzić porę dnia wpisz 4\n";
	std::cout<<"Aby wyłączyć program wpisz 5\n";
	std::cout<<"Twój wybór: ";
	std::cin>>wybor;
	system("clear");

	if (wybor==1){
		s1.next_hour();
	} else if (wybor == 2){
		s1.next_minute();
	} else if (wybor == 3){
		s1.next_second();
	} else if (wybor == 4){
		s1.time_of_day();
		s1.e_to_string();
	} else if (wybor == 5){
		break;
	}
	
}

return 0;

}

