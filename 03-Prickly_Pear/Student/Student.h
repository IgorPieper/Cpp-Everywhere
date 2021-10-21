#ifndef log_h
#define log_h

class Student{
	
std::string imie;
std::string nazwisko;
std::string index;
int semestr;
float srednia_ocen;

public:

	Student(){
		
		imie = "Igor"; nazwisko = "Pieper"; index="s25321"; semestr=1;srednia_ocen=4.9;

	};

	void to_string(){

	std::cout<<imie<<" "<<nazwisko<<" "<<index<<" "<<semestr<<" "<<srednia_ocen<<" ";

	}

};

#endif
