#include "meteors.h"

void meteors::frec_col(){
	x=rand()%72+5;
	y=4;
	
}
void meteors::frec_velocidad(){
	if(y>44 or y==4){
		velocidad=rand()%2+1;
	}
	y+=velocidad;
}

void meteors::pintar(){
	gotoxy(x,y);printf("%c",111);
}
void meteors::borrar(){
	gotoxy(x,y);printf(" ");
}
void meteors::mover(){
	borrar();
	frec_velocidad();
	if (y>44 or x==3){
		frec_col();
		
	}
	pintar();
}
