#include "arma.h"

void arma::balas(){
	gotoxy(x,y);printf(" ");
	y--;
	gotoxy(x,y);printf("|");
}
bool arma::eraser_bala(){
	if(y==4) return true;
	return false;
}
