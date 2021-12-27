#include <ncurses.h>

int position_width = 4;
int position_height = 5;

void position(){	
	
	start_color();
	
	init_pair(7, COLOR_BLACK, COLOR_RED);
	
	attron(COLOR_PAIR(7));
		mvprintw(position_height, position_width, "  ");
		move(0,0);
	attroff(COLOR_PAIR(7));
	
}

int before = 2;

void move(){	
	
	mvprintw(15, 2, "                             ");
	mvprintw(17, 2, "                             ");
	mvprintw(16, 2, "                             ");
	
	if (position_height>2 && before!=0){
		mvprintw(15, 2, "> I want to go up (W)");
	}
	if (position_width<=26){	
		mvprintw(16, 2, "> I want to go straight (D)");
	}
	if (position_height<8 && before!=1){
		mvprintw(17, 2, "> I want to go down (S)");
	}
	
	while(true){
		
		move(18, 2);
		int wybor = getch();
		
		if((wybor==259 || wybor=='w' || wybor=='W') && (before==1 || before==2) && position_height>2){
		
			position_height--;
			
			before=1;
			
			break;
			
		} else if ((wybor==261 || wybor=='d' || wybor=='D') && position_width<=26){
		
			position_width+=2;
			
			before=2;
			
			break;
			
		} else if ((wybor==258 || wybor=='s' || wybor=='S') && (before==0 || before==2) && position_height<8){
		
			position_height++;
			
			before=0;
			
			break;
		}

	}
}
