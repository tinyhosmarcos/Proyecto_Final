#include<iostream>
#include "nave.h"
#include "meteors.h"

using namespace std;

int main () {
	bool game_over=false;
	nave jugador(10,10);
	meteors a[10];
	limits();
	jugador.pintar();
	desp_cursor();
	while(!game_over){
		for(int i=0;i<10;i++){
			a[i].mover();
			jugador.crash(a[i]);
		}

		jugador.mover();
		Sleep(30);
	}
	

	return 0;
}

