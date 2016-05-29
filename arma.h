#ifndef ARMA_H
#define ARMA_H
#include "gameboard.h"
class arma{
private:
	int x,y;
public:
	arma(int _x,int _y):x(_x),y(_y){}
	int get_x(){return x;}
	int get_y(){return y;} 
	void balas();
	bool eraser_bala();
	
};
#endif
