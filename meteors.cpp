#include "meteors.h"

void meteors::frec_col(){
	srand(time(0));
	y=rand()%41+5;
	
}
	
void meteors::pintar(){
	gotoxy(x,y);printf("%c",111);
}
