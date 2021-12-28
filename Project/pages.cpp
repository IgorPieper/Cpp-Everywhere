#include <ncurses.h>
#include "life.cpp"
#include "eqipment.cpp"

void pages(int ph, int pw, int &vic, int hp, int eq){

	clear();
	life(hp);
	eqip(eq);
	
	start_color();
	init_pair(30, COLOR_MAGENTA, COLOR_BLACK);
	init_pair(31, COLOR_CYAN, COLOR_BLACK);
	
	attron(A_BOLD);
	
	if(ph==5 && pw==4){
		
		mvprintw(1, 50, "Dziedziniec przed zamkiem Krola Piekiel");
		mvprintw(3, 2, "Mroczny General> Masz naprawde ogromne szczescie aby otrzymac zadanie od samego Wladcy Piekiel. Niewielu doznaje takiego zaszczytu jak ty Karl.");		
		attron(COLOR_PAIR(31)); mvprintw(5, 2, "Karl> ."); attroff(COLOR_PAIR(31));
		mvprintw(7, 2, "Mroczny General> Przywodca musi miec wobec ciebie naprawde wielkie plany, jak zlecil ci tak wazne zadanie jakim jest porwanie ksiezniczki z zamku krolewskiego. ");
		mvprintw(8, 20, "Lepiej daj z siebie wszystko, swiat to w koncu nie gra, nie bedziesz mogl pozniej wczytac zapisu, a nie chcesz skonczyc raczej tak jak za dziecka.");
		attron(COLOR_PAIR(31)); mvprintw(10, 2, "Karl> ."); attroff(COLOR_PAIR(31));
		mvprintw(12, 2, "Mroczny General> No juz nie donsaj sie tak, nie chcemy przeciez by twoja malomownosc zabila ksiezniczke w drodze powrotnej.");
		attron(COLOR_PAIR(31)); mvprintw(14, 2, "Karl> ."); attroff(COLOR_PAIR(31));
		mvprintw(16, 2, "Mroczny General> Niech ci bedzie, ruszaj już do tego przeciwleglego krolestwa ludzi.");
		
	} else if(ph==5 && pw==28){
		mvprintw(0, 0, "I kidnap you lol.");
		vic=1;
	} else{
		show_map();
		position(ph, pw);
		travel(ph, pw, vic);
	}
	
	attroff(A_BOLD);
	getch();
	clear();

}



