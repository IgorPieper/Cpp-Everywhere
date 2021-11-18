#ifndef person_h
#define person_h

class Person {

public:

	std::string imie;
	std::string nazwisko;

	Person(std::string imie1,std::string nazwisko1){
		imie = imie1;
		nazwisko = nazwisko1;
	};	

	virtual void to_string() = 0;

};

class Mr :public Person{

public:	
	std::string tytul;

	Mr(std::string imie1, std::string nazwisko1, std::string tytul1 = "Mr") : Person(imie1, nazwisko1){
	
		tytul = tytul1;

	};
	
	void who_is_it(){
		to_string();
	}
	
	virtual void to_string(){
		std::cout<<tytul<<" "<<imie<<" "<<nazwisko<<" \n\n";
	}
};

class Mrs :public Person{

public:	
	std::string tytul;

	Mrs(std::string imie1, std::string nazwisko1, std::string tytul1 = "Mrs") : Person(imie1, nazwisko1){
	
		tytul = tytul1;

	};
	
	void who_is_it(){
		to_string();
	}
	
	virtual void to_string(){
		std::cout<<tytul<<" "<<imie<<" "<<nazwisko<<" \n\n";
	}
};

class King :public Person{

public:	
	std::string tytul;

	King(std::string imie1, std::string nazwisko1, std::string tytul1 = "King") : Person(imie1, nazwisko1){
	
		tytul = tytul1;

	};
	
	void who_is_it(){
		to_string();
	}
	
	virtual void to_string(){
		std::cout<<tytul<<" "<<imie<<" "<<nazwisko<<" \n\n";
	}
};

class Queen :public Person{

public:	
	std::string tytul;

	Queen(std::string imie1, std::string nazwisko1, std::string tytul1 = "Queen") : Person(imie1, nazwisko1){
	
		tytul = tytul1;

	};
	
	void who_is_it(){
		to_string();
	}
	
	virtual void to_string(){
		std::cout<<tytul<<" "<<imie<<" "<<nazwisko<<" \n\n";
	}
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Greeting{

public:

	virtual void greet() = 0;

};

class Hello :public Greeting{

public:
	virtual void greet(){
		std::cout<<"Hello ";
	}

};

class Good_evening :public Greeting{

public:
	virtual void greet(){
		std::cout<<"Good Evening ";
	}

};

class Farewell :public Greeting{

public:
	virtual void greet(){
		std::cout<<"Farewell ";
	}

};

#endif
