#ifndef NAVE_H
#define NAVE_H
#include <stdio.h>
#include<windows.h>
#include<conio.h>
#include "gameboard.h"

#define L 75
#define R 77
#define T 72
#define B 80
class nave{
private:
	int x;
	int y;
public:
	nave(int _x,int _y):x(_x),y(_y){};
	void pintar();
	void borrar();
	void mover();
};
#endif
