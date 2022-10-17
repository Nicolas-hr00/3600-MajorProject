/*
Nicolas Hidalgo Rotunno
*/
#include "major1.h"
#include <stdio.h>
void major1::palindrome(int number)
 {
    if (number > 1)

       palindrome(number >> 1);

     printf("%d", number & 1);
 }
unsigned int major1::reversing_bits(unsigned int number)//this is going to reverse the entire number
 {
   unsigned int reverse=0;
   while(number>0){ //this while is going through every number and reverse it until reaches the end
      reverse <<= 1;  //it is moving the bits to left shift leeft
      if (number & 1 ==1)
       reverse ^=1;
       number >>= 1; //moves the number left shift right
   }

   return reverse;
 }

bool major1::isPalindrome(int number) //this functions is going check if the binary representation given is a palindrome or not
 {
   unsigned int aft_reversed = reversing_bits(number);
   return (number == aft_reversed);
 }


// int main ()
// {
void major1::printpalindrome()
{
  unsigned int number;

  printf ("Enter a positive integer less than 2 billion ");//asks the user of te value and stores it on number the, it is an unsigned number
  scanf ("%u", &number);
  printf("Binary Representation of %d", number); //this print the binary representation of the nubmer
  printf(" = ");
  palindrome(number);

  if (isPalindrome(number)) //this checks if it a palindrome by calling the function is palindrome
  {
     printf("\n%d", number);
     printf(" is Palindrome");
   }
  else  //if it is not a palindrome it will print that it is not a palindrome
  {
     printf("\n%d", number);
     printf(" is not a Palindrome ");
   }
}
