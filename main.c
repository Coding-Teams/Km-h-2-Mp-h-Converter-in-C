#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main() {  //beginning of the function



    float mp_h;
	float km_h = 1.609; //variables
	float conversion;
	float conversion_reverse;
	int choise;

 do {


    printf("km/h2mp/h converter by Fabio - v1.0a \n");

	printf("Insert mp-h number \n");
	scanf("%f", &mp_h);

	conversion = mp_h * km_h; //operand for conversion


	printf("Converting to km-h... \n");

    printf("%f\n", conversion); //output operand

    //Reverse Operation.

    printf("Insert km_h number \n");
	scanf("%f", &km_h);

	conversion_reverse = km_h / mp_h; //operand for conversion_reverse


	printf("Converting to mp-h... \n");



    printf("%f\n", conversion_reverse); //output operand

    printf("Do you want to continue? 1 (yes) 2(no) \n");

    scanf("%d", &choise);

  } while (choise == 1);


      system("PAUSE");

      return 0;

 }

