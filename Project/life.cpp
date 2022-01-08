#include <ncurses.h>

void life(int hp, int &vic){

	start_color();
	
	int met=40;
	
	init_pair(10, COLOR_WHITE, COLOR_MAGENTA);
	init_pair(11, COLOR_WHITE, COLOR_RED);
	init_pair(12, COLOR_WHITE, COLOR_WHITE);
	init_pair(13, COLOR_WHITE, COLOR_BLACK);
	
	attron(COLOR_PAIR(10));
		mvprintw(20, 2 + met, "                        ");
		mvprintw(21, 2 + met, "  "); mvprintw(21, 24 + met, "  ");
		mvprintw(22, 2 + met, "  "); mvprintw(22, 24 + met, "  ");
		mvprintw(23, 2 + met, "  "); mvprintw(23, 24 + met, "  ");
		mvprintw(24, 2 + met, "  "); mvprintw(24, 24 + met, "  ");
		mvprintw(25, 2 + met, "  "); mvprintw(25, 24 + met, "  ");
		mvprintw(26, 2 + met, "  "); mvprintw(26, 24 + met, "  ");
		mvprintw(27, 2 + met, "  "); mvprintw(27, 24 + met, "  ");
		mvprintw(28, 2 + met, "  "); mvprintw(28, 24 + met, "  ");
		mvprintw(29, 2 + met, "  "); mvprintw(29, 24 + met, "  ");
		mvprintw(30, 2 + met, "  "); mvprintw(30, 24 + met, "  ");
		mvprintw(31, 2 + met, "                        ");
	attroff(COLOR_PAIR(10));
	
	attron(COLOR_PAIR(11));
		mvprintw(21, 4 + met, "                    ");
		mvprintw(22, 4 + met, "                    ");
		mvprintw(23, 4 + met, "                    ");
		mvprintw(24, 4 + met, "                    ");
		mvprintw(25, 4 + met, "                    ");
		mvprintw(26, 4 + met, "                    ");
		mvprintw(27, 4 + met, "                    ");
		mvprintw(28, 4 + met, "                    ");
		mvprintw(29, 4 + met, "                    ");
		mvprintw(30, 4 + met, "                    ");
	attroff(COLOR_PAIR(11));
	
	attron(COLOR_PAIR(12));
		mvprintw(22, 18 + met, "    ");
		mvprintw(23, 20 + met, "  ");
	attroff(COLOR_PAIR(12));
	
	attron(COLOR_PAIR(13));
		if(hp<=90) mvprintw(21, 4 + met, "                    ");
		if(hp<=80) mvprintw(22, 4 + met, "                    ");
		if(hp<=70) mvprintw(23, 4 + met, "                    ");
		if(hp<=60) mvprintw(24, 4 + met, "                    ");
		if(hp<=50) mvprintw(25, 4 + met, "                    ");
		if(hp<=40) mvprintw(26, 4 + met, "                    ");
		if(hp<=30) mvprintw(27, 4 + met, "                    ");
		if(hp<=20) mvprintw(28, 4 + met, "                    ");
		if(hp<=10) mvprintw(29, 4 + met, "                    ");
		if(hp<=0) mvprintw(30, 4 + met, "                    ");
		mvprintw(33, 8 + met, "Punkty Życia");
	attroff(COLOR_PAIR(13));
		if(hp<=0) vic=4;

}
