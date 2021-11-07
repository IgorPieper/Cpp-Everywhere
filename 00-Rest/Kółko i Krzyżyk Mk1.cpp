#include <iostream>

auto main () -> int{

int gracz=1;
std::string pole;
int A1=0, A2=0, A3=0;
int B1=0, B2=0, B3=0;
int C1=0, C2=0, C3=0;
int wygrana;

while(true){
	system("clear");
	std::cout<<"██████████████\n";
	std::cout<<"██";
		if (A1==0){
			std::cout<<"  ";
		} else if (A1==1){
			std::cout<<"\33[1;32m██\33[0m";
		} else if (A1==2){
			std::cout<<"\33[1;31m██\33[0m";
		}
	std::cout<<"██";
		if (B1==0){
			std::cout<<"  ";
		} else if (B1==1){
			std::cout<<"\33[1;32m██\33[0m";
		} else if (B1==2){
			std::cout<<"\33[1;31m██\33[0m";
		}
	std::cout<<"██";
		if (C1==0){
			std::cout<<"  ";
		} else if (C1==1){
			std::cout<<"\33[1;32m██\33[0m";
		} else if (C1==2){
			std::cout<<"\33[1;31m██\33[0m";
		}
	std::cout<<"██	1\n";
	std::cout<<"██████████████\n";
	std::cout<<"██";
		if (A2==0){
			std::cout<<"  ";
		} else if (A2==1){
			std::cout<<"\33[1;32m██\33[0m";
		} else if (A2==2){
			std::cout<<"\33[1;31m██\33[0m";
		}
	std::cout<<"██";
		if (B2==0){
			std::cout<<"  ";
		} else if (B2==1){
			std::cout<<"\33[1;32m██\33[0m";
		} else if (B2==2){
			std::cout<<"\33[1;31m██\33[0m";
		}
	std::cout<<"██";
		if (C2==0){
			std::cout<<"  ";
		} else if (C2==1){
			std::cout<<"\33[1;32m██\33[0m";
		} else if (C2==2){
			std::cout<<"\33[1;31m██\33[0m";
		}
	std::cout<<"██	2\n";
	std::cout<<"██████████████\n";
	std::cout<<"██";
		if (A3==0){
			std::cout<<"  ";
		} else if (A3==1){
			std::cout<<"\33[1;32m██\33[0m";
		} else if (A3==2){
			std::cout<<"\33[1;31m██\33[0m";
		}
	std::cout<<"██";
		if (B3==0){
			std::cout<<"  ";
		} else if (B3==1){
			std::cout<<"\33[1;32m██\33[0m";
		} else if (B3==2){
			std::cout<<"\33[1;31m██\33[0m";
		}
	std::cout<<"██";
		if (C3==0){
			std::cout<<"  ";
		} else if (C3==1){
			std::cout<<"\33[1;32m██\33[0m";
		} else if (C3==2){
			std::cout<<"\33[1;31m██\33[0m";
		}
	std::cout<<"██	3\n";
	std::cout<<"██████████████\n\n";
	std::cout<<"   A   B   C  \n\n";
	
	if (wygrana==1){
		std::cout<<"Gracz \33[1;32mZielony\33[0m wygrał!!!\n\n"; break;
	} else if (wygrana==2){
		std::cout<<"Gracz \33[1;31mCzerwony\33[0m wygrał!!!\n\n"; break;
	}

	if (gracz==1){
		std::cout<<"Gracz \33[1;31mCzerwony\33[0m wybiera pole: ";
		gracz++;	
	} else if (gracz==2){
		std::cout<<"Gracz \33[1;32mZielony\33[0m wybiera pole: ";
		gracz=1;
	}
	
	while(true){
		std::cin>>pole;
		if (gracz==1 && pole=="A1" && A1==0){
			A1=1; break;
		} else if (gracz==2 && pole=="A1" && A1==0){
			A1=2; break;
		} else if (gracz==1 && pole=="A2" && A2==0){
			A2=1; break;
		} else if (gracz==2 && pole=="A2" && A2==0){
			A2=2; break;
		} else if (gracz==1 && pole=="A3" && A3==0){
			A3=1; break;
		} else if (gracz==2 && pole=="A3" && A3==0){
			A3=2; break;
		} else if (gracz==1 && pole=="B1" && B1==0){
			B1=1; break;
		}  else if (gracz==2 && pole=="B1" && B1==0){
			B1=2; break;
		} else if (gracz==1 && pole=="B2" && B2==0){
			B2=1; break;
		} else if (gracz==2 && pole=="B2" && B2==0){
			B2=2; break;
		} else if (gracz==1 && pole=="B3" && B3==0){
			B3=1; break;
		} else if (gracz==2 && pole=="B3" && B3==0){
			B3=2; break;
		} else if (gracz==1 && pole=="C1" && C1==0){
			C1=1; break;
		}  else if (gracz==2 && pole=="C1" && C1==0){
			C1=2; break;
		} else if (gracz==1 && pole=="C2" && C2==0){
			C2=1; break;
		} else if (gracz==2 && pole=="C2" && C2==0){
			C2=2; break;
		} else if (gracz==1 && pole=="C3" && C3==0){
			C3=1; break;
		} else if (gracz==2 && pole=="C3" && C3==0){
			C3=2; break;
		} 
	}

	std::cout<<"\n";
	
	if (A1==1 && A2==1 && A3==1){
		wygrana=1;
	} else if (A1==2 && A2==2 && A3==2){
		wygrana=2;
	} else if (A1==1 && B1==1 && C1==1){
		wygrana=1;
	} else if (A1==2 && B1==2 && C1==2){
		wygrana=2;
	} else if (A1==1 && B2==1 && C3==1){
		wygrana=1;
	} else if (A1==2 && B2==2 && C3==2){
		wygrana=2;
	} else if (A3==1 && B2==1 && C1==1){
		wygrana=1;
	} else if (A3==2 && B2==2 && C1==2){
		wygrana=2;
	}


}
	
	 		
	
return 0;

}
