#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

	int i, j = 0, z = 0;

	printf("ASCII CODE TABLE:\n----------------------------------\n");

	int c = 32;
	
	for (i = 0; i < 95; i++){

		printf("%c\t", c);

		c += 19;
		j++;

		if (j == 5){

			z++;
			c = 32 + z;

			j = 0;

			printf("\n");

		}

	}

	printf("----------------------------------");
	printf("\a"); //BELL SOUND KAPPA (may work)

	//Pause
	_getch();

	return 0;

}
