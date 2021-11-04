#include <iostream>
#include <string>
#include "Time.h"

void arytmetyka(){
	
	system("clear");

	int godzina; int minuta; int sekunda; int wybor;


	std::cout<<"Proszę ustawić zegar numer 1:\n";
	do{ std::cout<<"Godzina: "; std::cin>>godzina; } while(godzina<0 || godzina>23);
	do{ std::cout<<"Minuta: "; std::cin>>minuta; } while(minuta<0 || minuta>59);
	do{ std::cout<<"Sekunda: "; std::cin>>sekunda; } while(sekunda<0 || sekunda>59);
	czas s2(godzina, minuta, sekunda);
	
	system("clear");
	std::cout<<"Proszę ustawić zegar numer 2:\n";
	do{ std::cout<<"Godzina: "; std::cin>>godzina; } while(godzina<0 || godzina>23);
	do{ std::cout<<"Minuta: "; std::cin>>minuta; } while(minuta<0 || minuta>59);
	do{ std::cout<<"Sekunda: "; std::cin>>sekunda; } while(sekunda<0 || sekunda>59);
	czas s3(godzina, minuta, sekunda);
	system("clear");	

	while(true){
	
	
	std::cout<<"Zegar 1: "; s2.to_string(); std::cout<<"\n";
	std::cout<<"Zegar 2: "; s3.to_string(); std::cout<<"\n\n";
	
	std::cout<<"Tryb dodawania jest pod przyciskiem 1\n";
	std::cout<<"Tryb odejmowania jest pod przyciskiem 2\n";
	std::cout<<"Pierwszy zegar jest mniejszy? Sprawdź przyciskiem 3\n";
	std::cout<<"Pierwszy zegar jest większy? Sprawdź przyciskiem 4\n";
	std::cout<<"Zegary pokazują taki sam czas? Sprawdź przyciskiem 5\n";
	std::cout<<"Zegary pokazują inny czas? Sprawdź przyciskiem 6\n";
	std::cout<<"Wróć przyciskiem 7\n\n";
	
	std::cout<<"Twój wybór: ";
	std::cin>>wybor;

	czas s4;
	
	if (wybor==1){

		system("clear");
		s4 = s2 + s3;
		if (s4.sec>=60){ 
			s4.sec = s4.sec - 60;
			s4.min = s4.min + 1;
		}
		if (s4.min>=60){
			s4.min = s4.min - 60;
			s4.hour = s4.hour + 1;
		}
		if (s4.hour>=24){
			s4.hour = s4.hour - 24;
			std::cout<<"(Z uwzględnieniem zmieny daty) ";
		}
		std::cout<<"Dodane godziny: "<<s4.hour<<":"<<s4.min<<":"<<s4.sec<<"\n\n";

	} else if (wybor==2){

		system("clear");
		s4 = s2 - s3;
		if (s4.sec<0){ 
			s4.sec = 59 + s4.sec;
			s4.min = s4.min - 1;
		}
		if (s4.min<0){
			s4.min = 59 + s4.min;
			s4.hour = s4.hour - 1;
		}
		if (s4.hour<0){
			s4.hour = 23 + s4.hour;
			std::cout<<"(Z uwzględnieniem zmieny daty) ";
		}
		std::cout<<"Odjęte godziny: "<<s4.hour<<":"<<s4.min<<":"<<s4.sec<<"\n\n";

	} else if (wybor==3){
		system("clear");
		
		if (s2 < s3){
			std::cout<<"Pierwszy zegar jest mniejszy\n\n";
		} else{
			std::cout<<"Pierwszy zegar nie jest mniejszy\n\n";
		}
	
	} else if (wybor==4){
		system("clear");
		
		if (s2 > s3){
			std::cout<<"Pierwszy zegar jest większy\n\n";
		} else{
			std::cout<<"Pierwszy zegar nie jest większy\n\n";
		}
	
	} else if (wybor==5){
		system("clear");
		
		if (s2 == s3){
			std::cout<<"Zegary są równe\n\n";
		} else{
			std::cout<<"Zegary nie są równe\n\n";
		}
	
	} else if (wybor==6){
		system("clear");
		
		if (s2 != s3){
			std::cout<<"Zegary nie są równe\n\n";
		} else{
			std::cout<<"Zegary są równe\n\n";
		}
	
	} else if(wybor==7){
		system("clear");
		break;
	}
	
	}
}

void polnoc(){
	system("clear");

	int godzina; int minuta; int sekunda; int wybor;

	std::cout<<"Proszę ustawić zegar: \n";
	do{ std::cout<<"Godzina: "; std::cin>>godzina; } while(godzina<0 || godzina>23);
	do{ std::cout<<"Minuta: "; std::cin>>minuta; } while(minuta<0 || minuta>59);
	do{ std::cout<<"Sekunda: "; std::cin>>sekunda; } while(sekunda<0 || sekunda>59);
	czas s5(godzina, minuta, sekunda);
	system("clear");

	while(true){
		
		std::cout<<"Zegar: "; s5.to_string(); std::cout<<"\n\n";

		std::cout<<"Ile godzin do północy? Wpisz 1\n";
		std::cout<<"Ile minut do północy? Wpisz 2\n";
		std::cout<<"Ile sekund do północy? Wpisz 3\n";
		std::cout<<"Ile czasu do północy? Wpisz 4\n";
		std::cout<<"Wróć przyciskiem 5\n\n";
	
		std::cout<<"Twój wybór: ";
		std::cin>>wybor;

		if(wybor==1){
			system("clear");
			s5.count_hours();
		} else if (wybor==2){
			system("clear");
			s5.count_minutes();
		} else if (wybor==3){
			system("clear");
			s5.count_seconds();
		} else if (wybor==4){
			system("clear");
			s5.time_to_midnight();
		} else if (wybor==5){
			system("clear");			
			break;
		}

	}
}

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
	std::cout<<"Aby włączyć tryb arytmetyczny wpisz 5\n";
	std::cout<<"Aby włączyć odliczanie do północy wpisz 6\n";
	std::cout<<"Aby wyłączyć program wpisz 7\n\n";
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
		arytmetyka();
	} else if (wybor == 6){
		polnoc();
	} else if (wybor == 7){
		break;
	}
	
}

return 0;

}



