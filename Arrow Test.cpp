#include <stdio.h>
#include <stdlib.h>
#include <process.h>
#include <dos.h>
#include <conio.h>
#include <windows.h>

void select (int position, int option, char *array);
int arrow(int keyPressed);
int inEnter(int keyPressed);

struct menu {
	char title [50];
	char option1 [7];
	char option2 [12];
	char option3 [5];
};

int y = 1, keyPressed, enter;

int main (){
	int test = 0;
	int enter;
	struct menu main;
	struct menu pause;
	struct menu gameOver;
	
	strcpy (main.title, "\t\t\t\t\t\t   NEED FOR SPEED\n\t\t\t\t\t\t\t0.5\n");	//Isi setiap screen menu.
	strcpy (main.option1, "START");
	strcpy (main.option2, "HELP");
	strcpy (main.option3, "QUIT");
	
	strcpy (pause.title, "\t\t\t\t\t\t   GAME PAUSED\n");
	strcpy (pause.option1, "RESUME");
	strcpy (pause.option2, "HELP");
	strcpy (pause.option3, "QUIT");
	
	strcpy (gameOver.title, "\t\t\t\t\t\t\t   GAME OVER\n");
	strcpy (gameOver.option1, "RETRY");
	strcpy (gameOver.option2, "LEADERBOARD");
	strcpy (gameOver.option3, "QUIT");
	
		Main:
			while (1){
				printf ("%s", main.title);
				select (1, y, main.option1);
				select (2, y, main.option2);
				select (3, y, main.option3);
				keyPressed = getch();
				inEnter(keyPressed);
				arrow(keyPressed);
			}
			switch (enter){	//Switch case menu.
				case 1:
					system ("cls");
					goto Main;
				case 2:
					system ("cls");
					goto Pause;
				case 3:
					system ("cls");
					goto Exit;
			}
		
		Pause:
			while (1){
				printf ("%s", pause.title);
				select (1, y, pause.option1);
				select (2, y, pause.option2);
				select (3, y, pause.option3);
				arrow(keyPressed);
				if (keyPressed == 13){
					enter = y;
					break;
				}	
			}
						
		GameOver:
			while (1){
				printf ("%s", gameOver.title);
				select (1, y, gameOver.option1);
				select (2, y, gameOver.option2);
				select (3, y, gameOver.option3);
				arrow(keyPressed);
				if (keyPressed == 13){
					enter = y;
					break;
				}	
			}
		
	Exit:
		return 0;
}

void select (int position, int option, char *array){
	if (position==option){
		printf ("\t\t\t\t\t\t    => ");
		printf ("%s", array);
		printf (" <=\n");
	}
	else{
		printf ("\t\t\t\t\t\t       ");
		printf ("%s", array);
		printf ("   \n");
	}
}

int arrow (int keyPressed){
	if (keyPressed == 80 && y != 3){
		y ++;
	}
	else if (keyPressed == 72 && y != 1){
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
	}
	else {
		enter = 0;
	}
	return enter;
}
