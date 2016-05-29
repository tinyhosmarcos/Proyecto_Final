#include<iostream>
#include "nave.h"
#include "meteors.h"
#include "arma.h"
#include <list>
using namespace std;

int main () {
	bool game_over=false;
	nave jugador(10,10);
	meteors a[7];
	limits();
	jugador.pintar();
	desp_cursor();
	
	list<arma*> one;
	list<arma*>::iterator num_balas;
	
	while(!game_over){
		
		if(kbhit()){
			char tecla=getch();
			if(tecla=='a')
				one.push_back(new arma(jugador.get_x()+2,jugador.get_y()-1));
		}
		for(num_balas= one.begin(); num_balas!=one.end();num_balas++){
			(*num_balas)->balas();
			if((*num_balas)->eraser_bala()){
				gotoxy((*num_balas)->get_x(),(*num_balas)->get_y());
				printf(" ");
				delete(*num_balas);
				num_balas=one.erase(num_balas);
			}
		}
		for(int i=0;i<7;i++){
			a[i].mover();
			jugador.crash(a[i]);
		}
		for (int i=0;i<7;i++){
			for(num_balas= one.begin(); num_balas!=one.end();num_balas++){
				if(a[i].get_x() == (*num_balas)->get_x()){
					if(a[i].get_y()+1 == (*num_balas)->get_y() or a[i].get_y() == (*num_balas)->get_y()){
						gotoxy((*num_balas)->get_x(),(*num_balas)->get_y());
						printf(" ");
						delete(*num_balas);
						num_balas=one.erase(num_balas);
						a[i].borrar();
						a[i].frec_col();
						a[i].frec_velocidad();
					}
						
				}
			}
		}
		jugador.mover();
		Sleep(40);
	}
	

	return 0;
}

