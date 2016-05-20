#include "gameboard.h"
void gotoxy(int x,int y){
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x; 
	dwPos.Y=y;
	SetConsoleCursorPosition(hcon,dwPos);
}
void desp_cursor(){
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO desaparecer;
	desaparecer.dwSize = 2;
	desaparecer.bVisible=false;
	SetConsoleCursorInfo(hcon,&desaparecer);
}
void limits(){
	for(int i=2;i<78;i++){
		gotoxy(i,3);printf("%c",205);
		gotoxy(i,45);printf("%c",205);
	}
	for(int i=4;i<46;i++){
		gotoxy(2,i);printf("%c",186);
		gotoxy(77,i);printf("%c",186);
	}
	gotoxy(2,3);printf("%c",201);
	gotoxy(2,45);printf("%c",200);
	gotoxy(77,3);printf("%c",187);
	gotoxy(77,45);printf("%c",188);
	
}
