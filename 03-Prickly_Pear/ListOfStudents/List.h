#ifndef List_h
#define List_h

#include <string>

class Student{
public:	
	std::string imie;
	std::string nazwisko;

	Student(std::string im, std::string na){
		
		imie = im; nazwisko = na;

	};

	void to_string(){

	std::cout<<imie<<" "<<nazwisko<<" ";

	}


};

#endif

