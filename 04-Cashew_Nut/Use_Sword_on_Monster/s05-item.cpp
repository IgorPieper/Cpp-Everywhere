#include <iostream>
#include "Item.h"

auto main () -> int{

system("clear");

int wybor1, wybor2, wybor3;

Creature beast1("Bestia", 300);
Weapon sword("Miecz", 30);
Weapon axe("Siekiera", 50);
Weapon bow("Łuk", 15);
Potion health("Mikstura Życia", 150);

while (true){

	if (beast1.zycie<=0){
		std::cout<<"Bestia Została pokonana!!!\n";
		break;
	}

	beast1.show();

	std::cout<<"1. Zaatakuj Bestię\n";
	std::cout<<"2. Użyj mikstury na Bestii\n";
	std::cout<<"3. Sprawdź ekwipunek\n";
	std::cout<<"4. Spróbuj uciec\n";
	std::cout<<"Twór wybór: ";
	std::cin>>wybor1;
	
	if (wybor1 == 1){

		system("clear");
		beast1.show();
		std::cout<<"1. Zaatakuj Bestię mieczem\n";
		std::cout<<"2. Zaatakuj Bestię siekierą\n";
		std::cout<<"3. Zaatakuj Bestię łukiem\n";
		std::cout<<"4. Zaatakuj Bestię pięścią\n";
		std::cout<<"Twór wybór: ";
		std::cin>>wybor2;

		if (wybor2 == 1){
			sword.use_on(beast1);
		} else if (wybor2 == 2){
			axe.use_on(beast1);
		} else if (wybor2 == 3){
			bow.use_on(beast1);
		}

	} else if (wybor1 == 2){

		health.use_on(beast1);

	} else if (wybor1 == 3){
		
		system("clear");
		beast1.show();
		std::cout<<"1. Sprawdź swój oręż\n";
		std::cout<<"2. Sprawdź swoją sakwę\n";
		std::cout<<"Twór wybór: ";
		std::cin>>wybor3;

		if (wybor3==1){

			system("clear");
			std::cout<<"\n";
			sword.strength();
			axe.strength();
			bow.strength();
			std::cout<<"\n";

		} else if(wybor3==2){
			system("clear");
			std::cout<<"\n";
			health.strength();
			std::cout<<"\n";
		}

	} else if (wybor1 == 4){

		std::cout<<"\nUcieczka powiodła się\n";
		break;
	}



}

return 0;

}
