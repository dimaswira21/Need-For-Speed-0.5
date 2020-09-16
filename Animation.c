#include <stdio.h>
#include <windows.h>

int main (){	//Animasi obstacle 1 lane ke bawah.
	int i, j, k;
	int a = 1;
	int lane [10][1]={0};
	
	while (1){
		if ((i%10)==0){	//Obstacle keluar setiap 10 poin.
			lane [0][0] = a;	//Obstacle disimbolkan dengan angka 1 yang kemudian dapat diprint grafiknya dengan fungsi if.
		}
		j=0;
		while (j<9){
			lane [j+1][0]=lane[j][0];
			lane [j][0]=0;
			for (k=0; k<10; k++){
				printf ("| %d |\n", lane[k][0]);
			}
			j++;
			if (j==9){
				lane [9][0]=0;
			}
			i++;
			printf ("\n\n%d", i);
			Sleep (400);
			system ("cls");
		}
		i++;
	}
	return 0;
}
