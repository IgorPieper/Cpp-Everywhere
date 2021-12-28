#include <ncurses.h>


void start(int &ph, int &pw, int &hp){

	start_color();
	
	init_pair(100, COLOR_WHITE, COLOR_WHITE);

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
		
		mvprintw(4,34,"                ");
		mvprintw(5,34,"                ");
		mvprintw(6,34,"    ");
		mvprintw(7,34,"    ");
		mvprintw(8,34,"    ");
		mvprintw(9,34,"    ");
		mvprintw(10,34,"    ");
		mvprintw(11,34,"    ");
		mvprintw(12,34,"                ");
		mvprintw(13,34,"                ");
		mvprintw(8,42,"        ");
		mvprintw(9,42,"        ");
		mvprintw(10,46,"    ");
		mvprintw(11,46,"    ");

		mvprintw(4,54,"              ");
		mvprintw(5,54,"              ");
		mvprintw(6,54,"    ");
		mvprintw(7,54,"    ");
		mvprintw(8,54,"              ");
		mvprintw(9,54,"              ");
		mvprintw(10,54,"    ");
		mvprintw(11,54,"    ");
		mvprintw(12,54,"    ");
		mvprintw(13,54,"    ");
		mvprintw(6,64,"    ");
		mvprintw(7,64,"    ");
		mvprintw(10,62,"    ");
		mvprintw(11,62,"    ");
		mvprintw(12,64,"    ");
		mvprintw(13,64,"    ");
		
		mvprintw(4,74,"            ");
		mvprintw(5,74,"            ");
		mvprintw(6,72,"    ");
		mvprintw(7,72,"    ");
		mvprintw(8,72,"    ");
		mvprintw(9,72,"    ");
		mvprintw(10,72,"              ");
		mvprintw(11,72,"              ");
		mvprintw(12,72,"    ");
		mvprintw(13,72,"    ");
		mvprintw(6,82,"    ");
		mvprintw(7,82,"    ");
		mvprintw(8,82,"    ");
		mvprintw(9,82,"    ");
		mvprintw(12,82,"    ");
		mvprintw(13,82,"    ");
	attroff(COLOR_PAIR(100));
	
	attron(A_BOLD);
		mvprintw(18,25, "Wcisnij dowolny klawisz aby rozpoczac gre");
	attroff(A_BOLD);
		move(18,24);
	
	int hack = getch();
	
	clear();
	
	if (hack=='d' || hack=='D'){
		attron(A_BOLD);
			mvprintw(1, 16, "Konsola Debugujaca");
			mvprintw(3, 2, "1. Niesmiertelnosc");
			mvprintw(5, 2, "2. Teleportacja");
			mvprintw(7, 2, "3. Exit");
		attroff(A_BOLD);
		
		while(true){
			move(1, 15);
			int hacki = getch();
			
			if(hacki=='1'){
				hp=999999;
			} else if(hacki=='2'){
				clear();
				
				mvprintw(1, 2, "Wysokosc: ");
				mvprintw(3, 2, "a> 2");
				mvprintw(5, 2, "b> 3");
				mvprintw(7, 2, "c> 4");
				mvprintw(9, 2, "d> 5");
				mvprintw(11, 2, "e> 6");
				mvprintw(13, 2, "f> 7");
				mvprintw(15, 2, "g> 8");
				
				move(1, 12);
				int height = getch();
				switch(height){
					case 'a':
						ph = 2; break;
					case 'A':
						ph = 2; break;
					case 'b':
						ph = 3; break;
					case 'B':
						ph = 3; break;
					case 'c':
						ph = 4; break;
					case 'C':
						ph = 4; break;
					case 'd':
						ph = 5; break;
					case 'D':
						ph = 5; break;
					case 'e':
						ph = 6; break;
					case 'E':
						ph = 6; break;
					case 'f':
						ph = 7; break;
					case 'F':
						ph = 7; break;
					case 'g':
						ph = 8; break;
					case 'G':
						ph = 8; break;
				}
				
				mvprintw(1, 2, "Szerokosc: ");
				mvprintw(3, 2, "a> 4");
				mvprintw(5, 2, "b> 6");
				mvprintw(7, 2, "c> 8");
				mvprintw(9, 2, "d> 10");
				mvprintw(11, 2, "e> 12");
				mvprintw(13, 2, "f> 14");
				mvprintw(15, 2, "g> 16");
				mvprintw(17, 2, "h> 18");
				mvprintw(19, 2, "i> 20");
				mvprintw(21, 2, "j> 22");
				mvprintw(23, 2, "k> 24");
				mvprintw(25, 2, "l> 26");
				mvprintw(27, 2, "m> 28");
				
				move(1, 13);
				int width = getch();
				switch(width){
					case 'a':
						pw = 4; break;
					case 'A':
						pw = 4; break;
					case 'b':
						pw = 6; break;
					case 'B':
						pw = 6; break;
					case 'c':
						pw = 8; break;
					case 'C':
						pw = 8; break;
					case 'd':
						pw = 10; break;
					case 'D':
						pw = 10; break;
					case 'e':
						pw = 12; break;
					case 'E':
						pw = 12; break;
					case 'f':
						pw = 14; break;
					case 'F':
						pw = 14; break;
					case 'g':
						pw = 16; break;
					case 'G':
						pw = 16; break;
					case 'h':
						pw = 18; break;
					case 'H':
						pw = 18; break;
					case 'i':
						pw = 20; break;
					case 'I':
						pw = 20; break;
					case 'j':
						pw = 22; break;
					case 'J':
						pw = 22; break;
					case 'k':
						pw = 24; break;
					case 'K':
						pw = 24; break;
					case 'l':
						pw = 26; break;
					case 'L':
						pw = 26; break;
					case 'm':
						pw = 28; break;
					case 'M':
						pw = 28; break;
				}
				
				break;
			} else if(hacki=='3'){
				break;
			}
		}
	}
}
