#include "major1.h"


int main ()
{

printf("           +--------------------------------------------------------------+\n           |            Computer Science and Engineering                  |\n           |       CSCE 2110 - Foundation of Data Structures              |\n           |                                                              |\n           |                      Major Assignmment                       |\n           |                                                              |\n           |                   Section 211 Group Members:                 |\n           |                      Brandon Tsuchiya                        |\n           |                       Eric Tsuchiya                           |\n           |               Sahardeed AhmedSahardeed Ahmed                 |\n           |                       Nicolas Rotunno                        |\n           +--------------------------------------------------------------+\n\n\n");


int selection;
printf("\n Welcome to the menu \n ");
// major1 object;
do
{//start of do
  printf("\nEnter the menu option for the operation to perform:");
  printf("\n(1) POWER OF 2");
  printf("\n(2) REVERSE BITS");
  printf("\n(3) REPLACE BIT POSITION FROM MASK");
  printf("\n(4) PALINDROME");
  printf("\n(5) EXIT");
  printf("\n--> ");
  scanf("%d", &selection);

  switch (selection)
   {//start of switch
     case 1:
       {
         //Power
        break;
       }
     case 2:
       {
         //Reverse
         break;
       }
     case 3:
       {
         //Replace
         break;
       }
     case 4:
       {
         //Palindrome
         printpalindrome();
         break;
       }
     case 5:
       {
	 printf("Program terminating. Goodbye.\n");
         break;
       }
    }//end of switch
  }while(selection != 5);

  return 0;
}
