#ifndef time_h
#define time_h

class czas{	
	int hour;
	int min;
	int sec;

public:

	czas(){

		hour = 22; min = 58; sec = 58;

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

};

#endif

