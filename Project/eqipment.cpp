#include <ncurses.h>

void eqip(int eq){
	
	int met = 50;
	
	start_color();
	
	init_pair(20, COLOR_WHITE, COLOR_MAGENTA);
	init_pair(21, COLOR_WHITE, COLOR_RED);
	init_pair(22, COLOR_WHITE, COLOR_GREEN);
	init_pair(23, COLOR_WHITE, COLOR_WHITE);
	init_pair(24, COLOR_WHITE, COLOR_BLACK);
	init_pair(25, COLOR_WHITE, COLOR_YELLOW);
	init_pair(26, COLOR_WHITE, COLOR_CYAN);
	
	attron(COLOR_PAIR(20));
		mvprintw(20, 28 + met, "                        ");
		mvprintw(21, 28 + met, "  "); mvprintw(21, 50 + met, "  ");
		mvprintw(22, 28 + met, "  "); mvprintw(22, 50 + met, "  ");
		mvprintw(23, 28 + met, "  "); mvprintw(23, 50 + met, "  ");
		mvprintw(24, 28 + met, "  "); mvprintw(24, 50 + met, "  ");
		mvprintw(25, 28 + met, "  "); mvprintw(25, 50 + met, "  ");
		mvprintw(26, 28 + met, "  "); mvprintw(26, 50 + met, "  ");
		mvprintw(27, 28 + met, "  "); mvprintw(27, 50 + met, "  ");
		mvprintw(28, 28 + met, "  "); mvprintw(28, 50 + met, "  ");
		mvprintw(29, 28 + met, "  "); mvprintw(29, 50 + met, "  ");
		mvprintw(30, 28 + met, "  "); mvprintw(30, 50 + met, "  ");
		mvprintw(31, 28 + met, "                        ");
	attroff(COLOR_PAIR(20));
		
		attron(COLOR_PAIR(24));
		mvprintw(21, 30 + met, "                    ");
		mvprintw(22, 30 + met, "                    ");
		mvprintw(23, 30 + met, "                    ");
		mvprintw(24, 30 + met, "                    ");
		mvprintw(25, 30 + met, "                    ");
		mvprintw(26, 30 + met, "                    ");
		mvprintw(27, 30 + met, "                    ");
		mvprintw(28, 30 + met, "                    ");
		mvprintw(29, 30 + met, "                    ");
		mvprintw(30, 30 + met, "                    ");
	attroff(COLOR_PAIR(24));
	
//Róża
	
	if(eq==1){
	
		attron(COLOR_PAIR(21));
			mvprintw(22, 38 + met, "    ");
			mvprintw(23, 36 + met, "  "); mvprintw(23, 42 + met, "  ");
			mvprintw(24, 34 + met, "  "); mvprintw(24, 40 + met, "    ");
			mvprintw(25, 32 + met, "  "); mvprintw(25, 38 + met, "    "); mvprintw(25, 44 + met, "  ");
			mvprintw(26, 32 + met, "  "); mvprintw(26, 36 + met, "  "); mvprintw(26, 40 + met, "  "); mvprintw(26, 44 + met, "  ");
			mvprintw(27, 34 + met, "    "); mvprintw(27, 36 + met, "    "); mvprintw(27, 42 + met, "  ");
			mvprintw(28, 36 + met, "      "); mvprintw(28, 40 + met, "  ");
		attroff(COLOR_PAIR(21));
		
		attron(COLOR_PAIR(22));
			mvprintw(28, 44 + met, "  ");
			mvprintw(29, 46 + met, "  ");
		attroff(COLOR_PAIR(22));
	} 

//Drewniany Miecz
	
	else if(eq==2){
	
		attron(COLOR_PAIR(20));
			mvprintw(22, 36 + met, "    ");
			mvprintw(23, 36 + met, "  "); mvprintw(23, 40 + met, "  ");
			mvprintw(24, 36 + met, "  "); mvprintw(24, 40 + met, "  ");
			mvprintw(25, 36 + met, "  "); mvprintw(25, 40 + met, "  ");
			mvprintw(26, 36 + met, "  "); mvprintw(26, 40 + met, "  ");
			mvprintw(27, 34 + met, "          ");
			mvprintw(28, 38 + met, "  ");
			mvprintw(29, 38 + met, "  ");
		attroff(COLOR_PAIR(20));
	}
	
//Plastikowy miecz
	
	else if(eq==3){
		
		attron(COLOR_PAIR(23));
			mvprintw(22, 36 + met, "    ");
			mvprintw(23, 36 + met, "  "); mvprintw(23, 40 + met, "  ");
			mvprintw(24, 36 + met, "  "); mvprintw(24, 40 + met, "  ");
			mvprintw(25, 36 + met, "  "); mvprintw(25, 40 + met, "  ");
			mvprintw(26, 36 + met, "  "); mvprintw(26, 40 + met, "  ");
			mvprintw(27, 34 + met, "          ");
			mvprintw(28, 38 + met, "  ");
			mvprintw(29, 38 + met, "  ");
		attroff(COLOR_PAIR(23));
	} 
	
// Amulet szczęścia (Odwrócone L)
	
	else if (eq==4) {
		attron(COLOR_PAIR(25));
			mvprintw(22, 34 + met, "            ");
			mvprintw(23, 44 + met, "  ");
			mvprintw(24, 42 + met, "  ");
			mvprintw(25, 42 + met, "  ");
			mvprintw(26, 40 + met, "  ");
			mvprintw(27, 40 + met, "  ");
			mvprintw(28, 38 + met, "  ");
			mvprintw(29, 38 + met, "  ");
		attroff(COLOR_PAIR(25));
	} 
	
// List
	
	else if (eq==5) {
		attron(COLOR_PAIR(23));
			mvprintw(23, 32 + met, "                ");
			mvprintw(24, 32 + met, "    "); mvprintw(24, 44 + met, "    ");
			mvprintw(25, 32 + met, "  "); mvprintw(25, 36 + met, "        "); mvprintw(25, 46 + met, "  ");
			mvprintw(26, 32 + met, "  "); mvprintw(26, 46 + met, "  ");
			mvprintw(27, 32 + met, "  "); mvprintw(27, 36 + met, "  "); mvprintw(27, 42 + met, "  "); mvprintw(27, 46 + met, "  ");
			mvprintw(28, 32 + met, "                ");
		attroff(COLOR_PAIR(23));
		
		attron(COLOR_PAIR(21));
			mvprintw(25, 38 + met, "    ");
			mvprintw(26, 38 + met, "    ");
		attroff(COLOR_PAIR(21));
	}
	
// Fiolka
	
	else if (eq==6) {
		attron(COLOR_PAIR(20));
			mvprintw(23, 38 + met, "    ");
		attroff(COLOR_PAIR(20));
		
		attron(COLOR_PAIR(23));
			mvprintw(24, 34 + met, "    "); mvprintw(24, 42 + met, "    ");
			mvprintw(25, 36 + met, "  "); mvprintw(25, 42 + met, "  ");
			mvprintw(26, 36 + met, "        ");
			mvprintw(27, 36 + met, "        ");
			mvprintw(28, 38 + met, "    ");
		attroff(COLOR_PAIR(23));
		
		attron(COLOR_PAIR(26));
			mvprintw(26, 38 + met, "    ");
			mvprintw(27, 38 + met, "    ");
		attroff(COLOR_PAIR(26));
	}	
		
// Patyk
	
	else if (eq==7) {
		attron(COLOR_PAIR(20));
			mvprintw(23, 38 + met, "  ");
			mvprintw(24, 38 + met, "  ");
			mvprintw(25, 38 + met, "    ");
			mvprintw(26, 38 + met, "  ");
			mvprintw(27, 38 + met, "  ");
			mvprintw(28, 38 + met, "  ");
		attroff(COLOR_PAIR(20));

	}
	
// Najmniejsze Skrzypce na Świecie
	
	else if (eq==8) {
		attron(COLOR_PAIR(23));
			mvprintw(25, 38 + met, "  ");
		attroff(COLOR_PAIR(23));

	}
	
// Łopata
	
	else if (eq==9) {
		attron(COLOR_PAIR(23));
			mvprintw(22, 36 + met, "      ");
			mvprintw(23, 38 + met, "  ");
			mvprintw(24, 38 + met, "  ");
			mvprintw(25, 38 + met, "  ");
			mvprintw(26, 38 + met, "  ");
		attroff(COLOR_PAIR(23));
		
		attron(COLOR_PAIR(20));
			mvprintw(27, 36 + met, "      ");
			mvprintw(28, 36 + met, "      ");
			mvprintw(29, 36 + met, "      ");
		attroff(COLOR_PAIR(20));			
	} 
	
//Pustka	
	
	else if (eq==0) {
		attron(COLOR_PAIR(24));
			mvprintw(21, 30 + met, "                    ");
			mvprintw(22, 30 + met, "                    ");
			mvprintw(23, 30 + met, "                    ");
			mvprintw(24, 30 + met, "                    ");
			mvprintw(25, 30 + met, "                    ");
			mvprintw(26, 30 + met, "                    ");
			mvprintw(27, 30 + met, "                    ");
			mvprintw(28, 30 + met, "                    ");
			mvprintw(29, 30 + met, "                    ");
			mvprintw(30, 30 + met, "                    ");
		attroff(COLOR_PAIR(24));

	}
	
	mvprintw(33, 35 + met, "Ekwipunek");
	
}
