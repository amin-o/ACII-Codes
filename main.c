#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#include "functions.h"

#define MAX_LETTERS 25

int main(){

	int i;

	char *user_input = malloc(MAX_LETTERS);
	int  user_arg, user_arg2;

	for (i = 0; i < i + 1; i++){

		printf("$ : ");
		
		scanf("%s", user_input);

		//USER HELP (Generate user commands)
		if (strcmp(user_input,	"help") == 0){

			Display_Help();
	
		}
		//SCODE (Display specific ASCII code)
		else if (strcmp(user_input, "scode") == 0){

			scanf("%d", &user_arg);

			if (user_arg >= 32 && user_arg <= 126){

				Display_ASCII_Code(user_arg);

			}
			else{

				printf("$ : WARRNING: ASCII CODE TABLE RANGES FROM 32 TO 126\n");

			}


		}
		//GENTABLE (Display default ASCII code table)
		else if (strcmp(user_input, "gentable") == 0){

			Display_ACII_Table(95);

		}
		//GENTABLE (Display first x ASCII codes)
		else if (strcmp(user_input, "fcode") == 0){

			scanf("%d", &user_arg);

			if (user_arg >= 0 && user_arg <= 95)
			{

				Display_ACII_Table(user_arg);

			}
			else{

				printf("$ : WARRNING: OUT OF BOUNDS.RANGE (0,95)\n");

			}


		}

	}

	//Pause
	_getch();

	return 0;

}
