#include <stdio.h>
#include <conio.h>
#include <windows.h>

int counter (int i){
	return i++;
}

int main (){
	int i = 0, input=NULL;
	
	while (1){
		if (kbhit()){	//Mengecek ada input dari user/tidak.
			input = getch()-'0'; //Jika iya, identifikasi input tersebut.
			if (input == -21){	//Selajutnya input akan diteruskan ke mekanisme penggerak mobil.
				break;
			}
		}
		i++;	//i adalah counter poin user yang terus berjalan tanpa menunggu adanya input.
		printf ("%d\n\n", i);
		printf ("%d", input);
		input = NULL;
		
		Sleep (500);
		system ("cls");
	}
	return 0;
}
