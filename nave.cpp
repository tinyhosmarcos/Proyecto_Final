#include "nave.h"
void nave::pintar(){
	gotoxy(x,y); printf("  %c",30);
	gotoxy(x,y+1);printf(" %c%c%c",40,207,41);
	gotoxy(x,y+2);printf("%c%c %c%c",30,190,190,30);
}
void nave::pintar_crash(){
	gotoxy(x,y); printf("  %c",176);
	gotoxy(x,y+1);printf(" %c%c%c",176,177,176);
	gotoxy(x,y+2);printf("%c%c %c%c",176,178,178,176);
	
}
void nave::borrar(){
	gotoxy(x,y); printf("     ");
	gotoxy(x,y+1);printf("     ");
	gotoxy(x,y+2);printf("     ");					 
}
void nave::mover(){
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
void nave::crash(class meteors &impact){
	if(x<=impact.get_x() &&  x+5>impact.get_x() && y<=impact.get_y() && y+2>=impact.get_y()){
		impact.borrar();
		impact.frec_col();
		impact.frec_velocidad();
		pintar_crash();
		
	}
}
