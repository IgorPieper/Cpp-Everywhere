#include <ncurses.h>

void life(int hp){

	start_color();
	
	init_pair(10, COLOR_WHITE, COLOR_MAGENTA);
	init_pair(11, COLOR_WHITE, COLOR_RED);
	init_pair(12, COLOR_WHITE, COLOR_WHITE);
	init_pair(13, COLOR_WHITE, COLOR_BLACK);
	
	attron(COLOR_PAIR(10));
		mvprintw(20, 2, "                        ");
		mvprintw(21, 2, "  "); mvprintw(21, 24, "  ");
		mvprintw(22, 2, "  "); mvprintw(22, 24, "  ");
		mvprintw(23, 2, "  "); mvprintw(23, 24, "  ");
		mvprintw(24, 2, "  "); mvprintw(24, 24, "  ");
		mvprintw(25, 2, "  "); mvprintw(25, 24, "  ");
		mvprintw(26, 2, "  "); mvprintw(26, 24, "  ");
		mvprintw(27, 2, "  "); mvprintw(27, 24, "  ");
		mvprintw(28, 2, "  "); mvprintw(28, 24, "  ");
		mvprintw(29, 2, "  "); mvprintw(29, 24, "  ");
		mvprintw(30, 2, "  "); mvprintw(30, 24, "  ");
		mvprintw(31, 2, "                        ");
	attroff(COLOR_PAIR(10));
	
	attron(COLOR_PAIR(11));
		mvprintw(21, 4, "                    ");
		mvprintw(22, 4, "                    ");
		mvprintw(23, 4, "                    ");
		mvprintw(24, 4, "                    ");
		mvprintw(25, 4, "                    ");
		mvprintw(26, 4, "                    ");
		mvprintw(27, 4, "                    ");
		mvprintw(28, 4, "                    ");
		mvprintw(29, 4, "                    ");
		mvprintw(30, 4, "                    ");
	attroff(COLOR_PAIR(11));
	
	attron(COLOR_PAIR(12));
		mvprintw(22, 18, "    ");
		mvprintw(23, 20, "  ");
	attroff(COLOR_PAIR(12));
	
	attron(COLOR_PAIR(13));
		if(hp<=90) mvprintw(21, 4, "                    ");
		if(hp<=80) mvprintw(22, 4, "                    ");
		if(hp<=70) mvprintw(23, 4, "                    ");
		if(hp<=60) mvprintw(24, 4, "                    ");
		if(hp<=50) mvprintw(25, 4, "                    ");
		if(hp<=40) mvprintw(26, 4, "                    ");
		if(hp<=30) mvprintw(27, 4, "                    ");
		if(hp<=20) mvprintw(28, 4, "                    ");
		if(hp<=10) mvprintw(29, 4, "                    ");
		mvprintw(33, 8, "Punkty Życia");
	attroff(COLOR_PAIR(13));

}
