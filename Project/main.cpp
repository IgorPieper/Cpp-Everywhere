#include <ncurses.h>
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

auto main() -> int{

initscr();
keypad(stdscr, TRUE);

start(ph, pw, hp);

while(true){
	
	pages(ph, pw, vic, hp, eq);
	
	show_map();
	position(ph, pw);
	travel(ph, pw, vic);
	
	if (vic>0){
		victory(vic);
		break;
	}
	
}

getch();
endwin();

return 0;
}
