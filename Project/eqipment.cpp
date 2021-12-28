#include <ncurses.h>

void eqip(int eq){

	start_color();
	
	init_pair(20, COLOR_WHITE, COLOR_MAGENTA);
	
	attron(COLOR_PAIR(20));
		mvprintw(20, 28, "                        ");
		mvprintw(21, 28, "  "); mvprintw(21, 50, "  ");
		mvprintw(22, 28, "  "); mvprintw(22, 50, "  ");
		mvprintw(23, 28, "  "); mvprintw(23, 50, "  ");
		mvprintw(24, 28, "  "); mvprintw(24, 50, "  ");
		mvprintw(25, 28, "  "); mvprintw(25, 50, "  ");
		mvprintw(26, 28, "  "); mvprintw(26, 50, "  ");
		mvprintw(27, 28, "  "); mvprintw(27, 50, "  ");
		mvprintw(28, 28, "  "); mvprintw(28, 50, "  ");
		mvprintw(29, 28, "  "); mvprintw(29, 50, "  ");
		mvprintw(30, 28, "  "); mvprintw(30, 50, "  ");
		mvprintw(31, 28, "                        ");
	attroff(COLOR_PAIR(20));
	
	mvprintw(33, 35, "Ekwipunek");
	
}
