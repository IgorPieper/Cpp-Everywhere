#ifndef List_h
#define List_h

class Student{

std::string numer;	
std::string imie;
std::string nazwisko;

public:

	Student(std::string num, std::string im, std::string na){
		
		numer = num; imie = im; nazwisko = na;

	};

	Student(std::string num){
		
		numer = num;

	};

	void to_string(){

	std::cout<<numer<<". "<<imie<<" "<<nazwisko<<"\n";

	}

	auto operator== (Student const& sprawa) -> bool{
		if(numer==sprawa.numer){
			return true;
		} else {
			return false;
		}
	}

	auto operator!= (Student const& sprawa) -> bool{
		if(numer!=sprawa.numer){
			return true;
		} else {
			return false;
		}
	}

};

#endif

