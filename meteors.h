#ifndef METEORS_H
#define METEORS_H
#include <stdio.h>
#include<windows.h>
#include <stdlib.h> 
#include <time.h> 
#include "gameboard.h" 
class meteors{
private:
	int x, y;
public:
	meteors(){x=5;y=4;}
	void frec_col();
	void pintar();
};
#endif
