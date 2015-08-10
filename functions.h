//<FCODE/GENTABLE FUNCTION (GENERATE X ASCII CODES OR DEFAULT 95)>
void Display_ACII_Table(int x){

	int i = 0, j = 0, z = 0;

	printf("\nASCII CODE TABLE:\n----------------------------------\n");

	int c = 32; //1st ASCII code
	
	for (; i < x; i++){

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
	printf("\n");
	printf("----------------------------------\n");

}

//<SCODE FUNCTION (GENERATE SPECIFIC ASCII CODE)>
void Display_ASCII_Code(int x){

	if (x == 32){
		printf("' '\n");
	}
	else{
		printf("%c\n", x);
	}

}

//<GENERATE HELP LIST>
void Display_Help(){

	printf("gentable        -- Will generate deafult ASCII code table.\n");
	printf("fcode x         -- Will generate first (x) ascii codes. [MAX:126]\n");
	printf("scode x         -- Will generate a specific ascii code. [MIN:32 , MAX:126]\n");

}
