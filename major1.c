#include "major1.h"

int main (){

printf("           +--------------------------------------------------------------+\n           |            Computer Science and Engineering                  |\n           |       CSCE 2110 - Foundation of Data Structures              |\n           |                                                              |\n           |                      Major Assignmment                       |\n           |                                                              |\n           |                               Group Members:                 |\n           |                      Brandon Tsuchiya                        |\n           |                       Eric Tsuchiya                           |\n           |               Sahardeed AhmedSahardeed Ahmed                 |\n           |                       Nicolas Rotunno                        |\n           +--------------------------------------------------------------+\n\n\n");

int selection;
int value=0;

do 
{ //start of do 1

  do 
  { //start of do 2
    printf("\nEnter the menu option for the operation to perform:");
    printf("\n(1) POWER OF 2");
    printf("\n(2) REVERSE BITS");
    printf("\n(3) REPLACE BIT POSITION FROM MASK");
    printf("\n(4) PALINDROME");
    printf("\n(5) EXIT");
    printf("\n--> ");
    scanf("%d", &selection);

    if (selection > 5 || selection < 1)
    { 
	printf("Error: Invalid option. Please try again."); 
    }
  } while (selection > 5 || selection < 1); //end of do 2

    if (selection == 5)
    {
	printf("Program terminating. Goodbye\n");
	return 0;
    }

  do 
  { //start of do 3
    printf("Enter a positive integer less than 2 billion: ");
    scanf("%d", &value);
  } while (value > 1999999999 || value < 1); //end of do 3

  switch (selection)
  {//start of switch
	case 1:{
	  powerFunction(value);
          break;
	}
	case 2:{
	  binary_converter(value);
           break;
	}
	case 3:{
          replacebitpos();
          break;
	}
	case 4:{
           //Palindrome
           //object.printpalindrome();
	   break;
	}
  }//end of switch

} while(selection != 5);

return 0;
}
