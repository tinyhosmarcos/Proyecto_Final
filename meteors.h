#ifndef METEORS_H
#define METEORS_H
#include <stdio.h>
#include<windows.h>
#include <stdlib.h> 
#include <time.h> 
#include <conio.h>
#include "gameboard.h" 
class meteors{
private:
	int x, y,velocidad;
public:
	meteors(){x=3;y=4;}
	void frec_col();
	void frec_velocidad();
	void pintar();
	void borrar();
	void mover();
	int get_x(){return x;}
	int get_y(){return y;}
	int set_x(int _x){x=_x;}
	int set_y(int _y){y=_y;}
};
#endif
