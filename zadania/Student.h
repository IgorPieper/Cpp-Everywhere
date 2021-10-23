#ifndef Student_h
#define Student_h

class Student{
	
std::string imie;
std::string nazwisko;
std::string index;
int semestr;
float srednia_ocen;

public:

	Student(std::string im, std::string na, std::string in, int se, float sr){
		
		imie = im; nazwisko = na; index = in; semestr = se;srednia_ocen = sr;

	};

	void to_string(){

	std::cout<<imie<<" "<<nazwisko<<" "<<index<<" "<<semestr<<" "<<srednia_ocen<<" ";

	}

};

#endif
