#include<iostream>
#include "nave.h"
#include "meteors.h"

using namespace std;

int main () {
	nave jugador(10,10);
	meteors keepler125;
	keepler125.pintar();
	limits();
	jugador.pintar();
	desp_cursor();
	jugador.mover();
	
	return 0;
}

