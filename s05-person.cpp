#include <iostream>
#include "Person.h"

auto main () -> int{

system("clear");

Mr osoba1("Jan", "Brzęczyszczykiewicz");
Mrs osoba2("Janina", "Brzęczyszczykiewiczówna");
King osoba3("Jan 3", "Brzęczyszczykiewski");
Queen osoba4("Jadwiga", "Brzęczyska");

osoba1.who_is_it();
osoba2.who_is_it();
osoba3.who_is_it();
osoba4.who_is_it();

return 0;

}
