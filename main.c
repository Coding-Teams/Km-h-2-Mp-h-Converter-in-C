#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main() {  //beginning of the function

    float conversion;  //variable operands
	float conversion_reverse;


    int choice;
	float mp_h;
	float km_h = 1.609; //variables for choice


	int decision; //variables for decision





	printf("km/h2mp/h converter by Fabio - v1.0a \n");

	do {
	    printf("Wich unit do you want to convert? 1(Mp/h) 2(km/h) 3(Exit)\n"); //Unit choice.
	scanf("%d", &choice);





switch (choice) { //using switch for multiple cases, linked to the user choise.

  case 1: //mp_h 2 km_H

      do {
         printf("Insert mp/h number \n");
	     scanf("%f", &mp_h);

         conversion = mp_h * km_h; //operand for conversion


	     printf("Converting to km/h... \n");

         printf("%f\n", conversion); //output operand

         printf("Do you want to continue? 1(Yes) 2(No) \n");
         scanf("%d", &decision);

      } while (decision == 1);


         break; //pause instruction.



  case 2: //km_h 2 mp_h

      do {
         printf("Insert km/h number \n");
	     scanf("%f", &km_h);

	     conversion = km_h / mp_h; //operand for conversion


	     printf("Converting to km/h... \n");

         printf("%f\n", conversion); //output operand

         printf("Do you want to continue? 1(Yes) 2(No) \n");
         scanf("%d", &decision);

      } while (decision == 1);

	     break;


  default:  //any value that it's not recognized inside the switch parameter. Used to exit the program.

           printf("Exiting program...\n");

           system("PAUSE");

           break;
	}


	} while (choice !=3); //has to be different from number 3, or else it will close)




 }
























