#include "nave.h"
void nave::pintar(){
	gotoxy(x,y); printf("  %c",30);
	gotoxy(x,y+1);printf(" %c%c%c",40,207,41);
	gotoxy(x,y+2);printf("%c%c %c%c",30,190,190,30);
}
void nave::borrar(){
	gotoxy(x,y); printf("     ");
	gotoxy(x,y+1);printf("     ");
	gotoxy(x,y+2);printf("     ");					 
}
void nave::mover(){
	bool game_over=false;
	while(!game_over){
		if (kbhit()){
			char tecla=getch();
			borrar();
			if(tecla == L and x>3) x--;
			if(tecla == R and x+6<78) x++;
			if(tecla == T and y>4) y--;
			if(tecla == B and y+3<45) y++;
			pintar();
		}
	}
}
