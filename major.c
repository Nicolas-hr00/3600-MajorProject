#include <stdio.h>

int main ()
{

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
         break;
       }
     case 2:
       {
         printf("\n Sirve 2\n ");
         break;
       }
     case 3:
       {
         printf("\n Sirve 3\n ");
         break;
       }
     case 4:
       {
         printf("\n Sirve 4\n ");
         break;
       }
     case 5:
       {
         printf("\n Enter 0 to exit 5\n ");
         break;
       }
    }//end of switch
  }while(user != 0);//end of do


  return 0;
}
