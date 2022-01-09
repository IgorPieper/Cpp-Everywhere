#include <ncurses.h>
#include <clocale>
#include "map.cpp"
#include "position.cpp"
#include "ending.cpp"
#include "pages.cpp"
#include "start.cpp"

int ph = 5;
int pw = 4;
int vic = 0;
int hp = 100;
int eq = 0;
int cloak = 0;
int ff = 1;

auto main() -> int{

std::setlocale(LC_ALL, "");

initscr();
keypad(stdscr, TRUE);

start(ph, pw, hp);

while(true){
	
	pages(ph, pw, vic, hp, eq, cloak, ff);
	
	if (vic>0){
		victory(vic);
		break;
	}
	
	show_map();
	position(ph, pw);
	travel(ph, pw, vic);
	
}

getch();
endwin();

return 0;
}
