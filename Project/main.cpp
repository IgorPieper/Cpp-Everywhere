#include <ncurses.h>
#include "map.cpp"
#include "position.cpp"

auto main() -> int{

	initscr();
	keypad(stdscr, TRUE);

while(true){
	
	show_map();
	position();
	
	move();
}

endwin();
return 0;

}
