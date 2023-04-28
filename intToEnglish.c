//Written by Otis Ding, Student ID: 251220811
//Program name: intToEnglish. The purpose of this program is to take an integer from the user as input, and output the integer in its english format

#include<stdio.h>

void main (){

    //Initialize all the variables we'll be using
    //A variable for the user input, and one each for each digit of the possible numbers
    int userInput, ones, tens, hundreds;

    //While loop that will allow the program to continue until the user inputs '0'
    while (userInput != 0){

        //Prompts the user for input
        printf("Please enter a value (1-999, 0 to quit): ");
        scanf("%d", &userInput);

        //Prints the start of the output string
        printf("You entered the number ");

        //These calculations will isolate each digit of the inputed number, and assign it to its respective variable
        ones = userInput % 10;
        tens = userInput % 100 - ones;
        hundreds = userInput - tens - ones;
        tens = tens / 10;
        hundreds = hundreds / 100;

        //Using 'switch' to make things simpler, ifs and else ifs could have done the job too but this is cleaner
        //checks for what the digit in the hundreds is, and prints the corresponding string to the output
        //Default is the case if the input is less than 3 digits
        switch (hundreds) {
            case 1:
                printf("one hundred ");
                break;
            case 2:
                printf("two hundred ");
                break;
            case 3:
                printf("three hundred ");
                break;
            case 4:
                printf("four hundred ");
                break;
            case 5:
                printf("five hundred ");
                break;
            case 6:
                printf("six hundred ");
                break;
            case 7:
                printf("seven hundred ");
                break;
            case 8:
                printf("eight hundred ");
                break;
            case 9:
                printf("nine hundred ");
                break;
            default:
                printf("");
                break;
        }

        //Similar to the switch above, this will print the corresponding outputs depending on the second digit, the tens
        switch (tens){

            //Since the teens exits, case 1 will have a switch nested inside to account for each of those situations
            case 1:
                
                //The default is when the ones digit is 0, thus the output is 'ten'
                switch (ones){
                    case 1:
                        printf("eleven");
                        break;
                    case 2:
                        printf("twelve");
                        break;
                    case 3:
                        printf("thirteen");
                        break;
                    case 4:
                        printf("fourteen");
                        break;
                    case 5:
                        printf("fifteen");
                        break;
                    case 6:
                        printf("sixteen");
                        break;
                    case 7:
                        printf("seventeen");
                        break;
                    case 8:
                        printf("eighteen");
                        break;
                    case 9:
                        printf("nineteen");
                        break;
                    default:
                        printf("ten");
                        break;
                }
                break;
            case 2:
                printf("twenty ");
                break;
            case 3:
                printf("thirty ");
                break;
            case 4:
                printf("fourty ");
                break;
            case 5:
                printf("fifty ");
                break;
            case 6:
                printf("sixty ");
                break;
            case 7:
                printf("seventy ");
                break;
            case 8:
                printf("eighty ");
                break;
            case 9:
                printf("ninety ");
                break;
            default:
                printf("");
                break;
        }

        //The final switch is within an if statement because of the teens we have already accounted for above
        //Default represents a 0, so it outputs an empty string to account for that
        if (tens != 1){
            switch(ones){
                case 1:
                    printf("one");
                    break;
                case 2:
                    printf("two");
                    break;
                case 3:
                    printf("three");
                    break;
                case 4:
                    printf("four");
                    break;
                case 5:
                    printf("five");
                    break;
                case 6:
                    printf("six");
                    break;
                case 7:
                    printf("seven");
                    break;
                case 8:
                    printf("eight");
                    break;
                case 9:
                    printf("nine");
                    break;
                default:
                    printf("");
                    break;
            }
        }

        //Ends the while loop if the user inputs 0
        if (userInput == 0){
            //Prints '0' to finish the output string
            printf("0 \n");
        }

        //prints an \n to make a new line for the next loop
        printf("\n");

    }




}