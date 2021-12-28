#include <ncurses.h>
void victory(int &victory){
clear();
	if (victory==1){
		printw("You win, you idiot");
	} else if(victory==2){
		printw("Harakiri");
	}

}
