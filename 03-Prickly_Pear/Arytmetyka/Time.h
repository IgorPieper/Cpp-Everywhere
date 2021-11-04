#ifndef time_h
#define time_h

#include <string>

enum class Time_of_day{
	rano, dzien, wieczor, noc
};

class czas{

public:
	int hour;
	int min;
	int sec;
	std::string pora;

public:
	
	czas() {};

	czas(int h, int m, int s){

		hour = h; min = m; sec = s;

	};

	void to_string(){
	
		std::cout<<hour<<":"<<min<<":"<<sec;	

	}

	void next_hour(){
		
		hour = hour + 1;
		if_liczba();
	}

	void next_minute(){
		
		min = min + 1;
		if_liczba();
	}
	void next_second(){
		
		sec = sec + 1;
		if_liczba();
	}

	void if_liczba(){
		if (sec>59){
			sec = 0;
			min = min + 1;
		}
		if (min>59){
			min = 0;
			hour = hour + 1;
		}
		if (hour>23){
			hour=0;
		}
		std::cout<<hour<<":"<<min<<":"<<sec<<"\n";
	}

	void time_of_day(){

		if (hour>=6 && hour<=12){
			pora = "rano";
		} else if (hour>12 && hour<=18){
			pora = "dzien";
		} else if (hour>18 && hour<=21){
			pora = "wieczor";
		} else if ((hour>21 && hour<=23) || (hour>=0 && hour<6)){
			pora = "noc";
		}

		
	}
	
	void e_to_string(){
		if (pora=="rano"){
			std::cout<<"Jest rano\n";
			if_liczba();
		} else if (pora=="dzien"){
			std::cout<<"Jest dzień\n";
			if_liczba();
		} else if (pora=="wieczor"){
			std::cout<<"Jest wieczór\n";
			if_liczba();
		} else if (pora=="noc"){
			std::cout<<"Jest noc\n";
			if_liczba();
		}
	}
	
	czas operator+ (czas &obj){
		czas ss;
		ss.hour = hour + obj.hour;
		ss.min = min + obj.min;
		ss.sec = sec + obj.sec;
		return ss;
	}

	czas operator- (czas &obj){
		czas ss;
		ss.hour = hour - obj.hour;
		ss.min = min - obj.min;
		ss.sec = sec - obj.sec;
		return ss;
	}

	bool operator< (czas &obj){
		
		if(hour < obj.hour){
			return true;
		} else {
			return false;
		}
		
	}

	bool operator> (czas &obj){
		
		if(hour > obj.hour){
			return true;
		} else {
			return false;
		}
		
	}

	bool operator== (czas &obj){
		
		if(hour == obj.hour && min == obj.min && sec == obj.sec){
			return true;
		} else {
			return false;
		}
		
	}

	bool operator!= (czas &obj){
		
		if(hour != obj.hour || min != obj.min || sec != obj.sec){
			return true;
		} else {
			return false;
		}
		
	}

};

#endif
