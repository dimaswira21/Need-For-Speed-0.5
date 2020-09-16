#include <stdio.h>
#include <windows.h>
#include <conio.h>

int y = 2, keyPressed, enter;

void select (int position, int option); //Modular untuk menggeser dan mengeprint grafik.
int arrow(int keyPressed);
int inEnter(int keyPressed);

int main (){
	int movement, position;
	
	while (1){	//Mobil dapat disimbolkan dengan angka '1', kemudian baru diubah menjadi grafik
		select (1, y);
		select (2, y);
		select (3, y);
		movement = getch();
		arrow (movement);
	}
	
	return 0;	
}

void select (int position, int option){
	if (position==option){
		printf ("|¡^¡|");
	}
	else{
		printf ("|   |");
	}
}

int arrow (int keyPressed){
	if (keyPressed == 77 && y != 3){
		y ++;
	}
	else if (keyPressed == 75 && y != 1){
		y --;
	}
	else {
		y = y;
	}
	system ("cls");
	return y;
}

int inEnter (int keyPressed){
	if (keyPressed == 13){
		enter = y;
		printf ("%d", enter);
		system ("pause");
	}
	return enter;
}
