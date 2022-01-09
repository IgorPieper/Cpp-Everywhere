#include <ncurses.h>

void victory(int &victory){
clear();
	
	attron(A_BOLD);
	
//Porwanie Księżniczki
	
	if (victory==1){
		mvprintw(15,6,"Zakoczenie nr.1");
	} 
	
// Dotarcie do ruin koloseum	
	
	else if(victory==2){
		mvprintw(15,6,"Zakoczenie nr.2");
	} 
	
// Zatrzymanie czasu	
	
	else if(victory==3){
		mvprintw(15,6,"Zakoczenie nr.3");
	} 
	
//	Zabrakło HP?
	
	else if(victory==4){
		mvprintw(15,6,"Zakoczenie nr.4");
	} 
	
// Nieudany eksperyment	
	
	else if(victory==5){
		mvprintw(15,6,"Zakoczenie nr.5");
	} 
	
// Nowy biznes	
	
	else if(victory==6){
		mvprintw(15,6,"Zakoczenie nr.6");
	}
	
// Lalka księżniczki	
	
	else if(victory==7){
		mvprintw(15,6,"Zakoczenie nr.7");
	}
	
//Wirus	
	
	else if(victory==8){
		mvprintw(15,6,"Zakoczenie nr.8");
	}
	
//Brak Kaptura
	
	else if(victory==9){
		mvprintw(15,6,"Zakoczenie nr.9");
	}
	
	attroff(A_BOLD);
	
	attron(COLOR_PAIR(100));
		mvprintw(1,4,"        ");
		mvprintw(2,7,"  ");
		mvprintw(3,7,"  ");
		mvprintw(4,7,"  ");
		mvprintw(5,7,"  ");
		
		mvprintw(1,14,"  ");
		mvprintw(2,14,"  ");
		mvprintw(3,14,"        ");
		mvprintw(4,14,"  ");
		mvprintw(5,14,"  ");
		mvprintw(1,20,"  ");
		mvprintw(2,20,"  ");
		mvprintw(4,20,"  ");
		mvprintw(5,20,"  ");

		mvprintw(1,24,"      ");
		mvprintw(2,24,"  ");
		mvprintw(3,24,"      ");
		mvprintw(4,24,"  ");
		mvprintw(5,24,"      ");
		
		mvprintw(7,5,"      ");
		mvprintw(8,5,"  ");
		mvprintw(9,5,"      ");
		mvprintw(10,5,"  ");
		mvprintw(11,5,"      ");
		
		mvprintw(7,13,"  ");
		mvprintw(8,13,"    ");
		mvprintw(9,13,"  ");
		mvprintw(10,13,"  ");
		mvprintw(11,13,"  ");
		mvprintw(7,13,"  ");
		mvprintw(9,16,"  ");
		mvprintw(10,17,"  ");
		mvprintw(7,19,"  ");
		mvprintw(8,19,"  ");
		mvprintw(9,19,"  ");
		mvprintw(10,19,"  ");
		mvprintw(11,19,"  ");
		
		mvprintw(7,23,"      ");
		mvprintw(8,23,"  ");
		mvprintw(9,23,"  ");
		mvprintw(10,23,"  ");
		mvprintw(11,23,"      ");
		mvprintw(8,29,"  ");
		mvprintw(9,29,"  ");
		mvprintw(10,29,"  ");
	attroff(COLOR_PAIR(100));
	
	move(15, 5);
}
