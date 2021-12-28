#include <ncurses.h>


void show_map(){
	
	int map_width = 14;
	int map_height = 7;
	
	int real_map_width = map_width*2;

	start_color();
	
	init_pair(1, COLOR_WHITE, COLOR_MAGENTA);
	init_pair(2, COLOR_WHITE, COLOR_GREEN);
	init_pair(3, COLOR_WHITE, COLOR_BLACK);
	init_pair(4, COLOR_RED, COLOR_WHITE);
	init_pair(5, COLOR_WHITE, COLOR_BLUE);
	init_pair(6, COLOR_MAGENTA, COLOR_GREEN);
	
// Border
	attron(COLOR_PAIR(1));
		for(int i=0; i<=real_map_width; ++i){
			mvprintw(1, i+2, "  ");
			mvprintw(9, i+2, "  ");
		}
		
		for(int i=0; i<=map_height; ++i){
			mvprintw(i+2, 2, "  ");
			mvprintw(i+2, 30, "  ");
		}
	attroff(COLOR_PAIR(1));
	
// Plain and Mountains
	attron(COLOR_PAIR(2));
		mvprintw(2, 4, "                          ");
		mvprintw(3, 4, "                          ");
		mvprintw(4, 4, "                          ");
		mvprintw(5, 4, "                          ");
		mvprintw(6, 4, "          ^    ^          ");
		mvprintw(7, 4, "        ^ ^ ^ ^ ^         ");
		mvprintw(8, 4, "         ^ ^  ^  ^        ");
	attroff(COLOR_PAIR(2));
	
// Evil Empire
	attron(COLOR_PAIR(3));
		mvprintw(2, 4, "  ");
		mvprintw(3, 4, "    ");
		mvprintw(4, 4, "    ");
		mvprintw(5, 4, "    ");
		mvprintw(6, 4, "    ");
		mvprintw(7, 4, "    ");
		mvprintw(8, 4, "  ");
	attroff(COLOR_PAIR(3));
	
// Human Kingdom
	attron(COLOR_PAIR(4));
		mvprintw(2, 26, "  ^ ");
		mvprintw(3, 24, "    ^ ");
		mvprintw(4, 24, "   ^  ");
		attron(A_BOLD); mvprintw(5, 24, "     M"); attroff(A_BOLD);
		mvprintw(6, 24, "  ^ ^ ");
		mvprintw(7, 24, "   ^  ");
		mvprintw(8, 26, "  ^ ");
	attroff(COLOR_PAIR(4));

// Lake
	attron(COLOR_PAIR(5));
		mvprintw(2, 10, " ~  ~  ~  ");
		mvprintw(3, 12, " ~  ~ ");
	attroff(COLOR_PAIR(5));

// Forest
	attron(COLOR_PAIR(6));
		mvprintw(2, 20, "^^^^^^");
		mvprintw(3, 18, " ^ ^ ^");
		mvprintw(4, 20, "  ^ ");
	attroff(COLOR_PAIR(6));

}
