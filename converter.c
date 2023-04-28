//Written by: Otis Ding, Student ID: 251220811
//Program name: converter.c, its purpose is to take in user input in order to convert various units of measurement

#include<stdio.h>

void main (){
    //Initialize all the variables we'll be using
    //ints for user inputs as described by the assignment description
    int userInput, valid;
    //Float value for user input
    float value;
    //The various character inputs we'll be getting from the user to determine which direction they want their conversion in
    char weight, area, volume, distance;
    //Set valid to default to false
    valid = 0;

    while (userInput != 5){


        //Input to determine which set of conversions the user would like to use
        //In a while loop that will continue to ask for an input until it is valid
        while ((userInput < 1) || (userInput > 5)){
            printf("What would you like to do? (Please enter a number from 1 - 5): ");
            scanf("%d", &userInput);
        }


        //Checks if they want kg to lbs
        if (userInput == 1){
            //valid is initially set to 0, so the while loop will run initially and continue to do so unless the proper input is given
            while (valid == 0){
                //Promts user for the direction of their conversion
                printf("Please enter 'K' for a conversion from kg to lbs, and 'P' for lbs to kg: ");
                scanf(" %c", &weight);
                //Checks to make sure the input is valid. If so, the while loop ends
                if ((weight == 'K') || (weight == 'P')){
                    valid = 1;
                }
            }

            //Prompts the user for their input, what value they would like to convert
            printf("Please enter the value you would like to convert: ");
            scanf("%f", &value);
            //Specifies the correct calculations
            if (weight == 'K'){
                //Makes the conversion calculations
                value = value * 2.20462;
                //Prints final output
                printf("That is equal to %f lbs \n", value);
            }
            if (weight == 'P'){
                value = value / 2.20462;
                printf("That is equal to %f kg \n", value);
            }

            //Resets the variables so the loop can coninue
            userInput = 0;
            valid = 0;
        }

        //Checks if they want Hectares to Acres
        if (userInput == 2){
            //valid is initially set to 0, so the while loop will run initially and continue to do so unless the proper input is given
            while (valid == 0){
                //Promts user for the direction of their conversion
                printf("Please enter 'H' for a conversion from Hectares to Acres, and 'A' for Acres to Hectares: ");
                scanf(" %c", &area);
                //Checks to make sure the input is valid. If so, the while loop ends
                if ((area == 'H') || (area == 'A')){
                    valid = 1;
                }
            }

            //Prompts the user for their input, what value they would like to convert
            printf("Please enter the value you would like to convert: ");
            scanf("%f", &value);
            //Specifies the correct calculations
            if (area == 'H'){
                //Makes the calculation
                value = value * 2.47105;
                //prints the final output
                printf("That is equal to %f Acres \n", value);
            }
            if (area == 'A'){
                value = value / 2.47105;
                printf("That is equal to %f Hectares \n", value);
            }

            //Resets the variables so the loop can coninue
            userInput = 0;
            valid = 0;
        }

        //Checks if the user wants to convert from litres to gallons
        if (userInput == 3){
            //While loop for making sure the input is valid
            while (valid == 0){
                //prompts the user for input
                printf("Please enter 'L' for a conversion from Litres to Gallons, and 'G' for Gallons to Litres: ");
                scanf(" %c", &volume);
                //Checks if the input is valid
                if ((volume == 'L') || (volume == 'G')){
                    //switchs valid to 1 if the input is valid
                    valid = 1;
                }
            }

            //Prompts the user for the value they would like to convert
            printf("Please enter the value you would like to convert: ");
            scanf("%f", &value);
            //Specifies the correct calculation
            if (volume == 'L'){
                //Makes the calculation
                value = value * 0.264172;
                //Prints the output
                printf("That is equal to %f Gallons \n", value);
            }
            //Repeat
            if (volume == 'G'){
                value = value / 0.264172;
                printf("That is equal to %f Litres \n", value);
            }

            //Resets the variables so the loop can coninue
            userInput = 0;
            valid = 0;
        }

        //Checks if the user would like to convert from Km to Miles
        if (userInput == 4){

            //While loop for making sure the input is valid
            while (valid == 0){
                //prompts the user for input to decide the direction of the conversion
                printf("Please enter 'K' for a conversion from Kilometre to Mile, and 'M' for Mile to Kilometre: ");
                scanf(" %c", &distance);
                //Checks if the input is valid
                if ((distance == 'K') || (distance == 'M')){
                    valid = 1;
                }
            }

            //Prompts the user for the value they would like to convert
            printf("Please enter the value you would like to convert: ");
            scanf("%f", &value);
            //Specifies which calculation needs to be made
            if (distance == 'K'){
                //Makes the calculation
                value = value * 0.621371;
                //Prints the final result
                printf("That is equal to %f Miles \n", value);
            }
            //Repeat
            if (distance == 'M'){
                value = value / 0.621371;
                printf("That is equal to %f Kilometers \n", value);
            }
            
            //Resets the variables for the loop to continue
            userInput = 0;
            valid = 0;
        }

        //In the case of 5, the exit input, a sentence is printed notifying the user of the end of the program, then the return statment ends it.
        if (userInput == 5){
            printf("You have chosen to exit. \n");
            return;
        }
    }



}