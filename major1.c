<<<<<<< HEAD
#include <stdio.h>


//using namespace std;
=======
 #include <stdio.h>
>>>>>>> db6ca5677c15a363434051a8ad63e75112e72baf

int main ()
{

<<<<<<< HEAD
  printf("           +--------------------------------------------------------------+\n           |            Computer Science and Engineering                  |\n           |       CSCE 2110 - Foundation of Data Structures              |\n           |                                                              |\n           |                      Major Assignmment                       |\n           |                                                              |\n           |                   Section 211 Group Members:                 |\n           |                      Brandon Tsuchiya                        |\n           |                       Eric Tsuchiya                           |\n           |               Sahardeed AhmedSahardeed Ahmed                 |\n           |                       Nicolas Rotunno                        |\n           +--------------------------------------------------------------+\n\n\n");

  int selection;
  printf("\n Welcome to the menu \n ");
  //

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
=======
  printf("           +--------------------------------------------------------------+\n           |            Computer Science and Engineering                  |\n           |       CSCE 2110 - Foundation of Data Structures              |\n           |                                                              |\n           |                      Major Assignmment                       |\n           |                                                              |\n           |                   Section 211 Group Members:                 |\n           |                      Brandon Tsuchiya                        |\n           |                       Eric Tsuchiy                           |\n           |               Sahardeed AhmedSahardeed Ahmed                 |\n           |                       Nicolas Rotunno                        |\n           +--------------------------------------------------------------+\n\n\n");

  int user;
  printf("\n Welcome to the menu \n ");
  //



do
{//start of do
  printf("\nEnter your option: ");

  printf("\nOption 1: ");
  printf("\nOption 2: ");
  printf("\nOption 3: ");
  printf("\nOption 4: ");
  printf("\n----------> ");
  scanf("%d", &user);


  switch (user)
   {//start of switch
     case 1:
       {
         printf("\n Sirve 1\n ");
>>>>>>> db6ca5677c15a363434051a8ad63e75112e72baf
         break;
       }
     case 2:
       {
<<<<<<< HEAD
         //Reverse
=======
         printf("\n Sirve 2\n ");
>>>>>>> db6ca5677c15a363434051a8ad63e75112e72baf
         break;
       }
     case 3:
       {
<<<<<<< HEAD
         //Replace
=======
         printf("\n Sirve 3\n ");
>>>>>>> db6ca5677c15a363434051a8ad63e75112e72baf
         break;
       }
     case 4:
       {
<<<<<<< HEAD
         //Palindrome
=======
         printf("\n Sirve 4\n ");
>>>>>>> db6ca5677c15a363434051a8ad63e75112e72baf
         break;
       }
     case 5:
       {
<<<<<<< HEAD
	 printf("Program terminating. Goodbye.\n");
         //exit(0);
         break;
       }
    }//end of switch
  }while(selection != 5);//end of do
=======
         printf("\n Enter 0 to exit 5\n ");
         break;
       }
    }//end of switch
  }while(user != 0);//end of do

>>>>>>> db6ca5677c15a363434051a8ad63e75112e72baf

  return 0;
}
