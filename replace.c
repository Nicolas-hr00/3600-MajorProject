#include<stdio.h>
#include "major1.h"

//Created by Sahardeed Ahmed

void replacebitpos(int intNum)
{
	int intMask,replacement; //variables for integer, integer mask, and the replacement position
	
	//two while loops to receive the 
    do
    {
	    printf("Enter a positive integer mask up to 3 billion: "); // prompts and reads users integer mask value
	    scanf("%d",&intMask);
        if(intMask>3000000000||intMask<0){ // checks if integer is an accepted value
            continue;
        }
        else{
            break;
        }
    } while(1);
    
    do
    {
	    printf("Enter the bit replacement position from mask (0-indexed): "); // prompts and reads users bit replacement position value
	    scanf("%d",&replacement);
	    if(replacement>31||replacement<0){ // checks if integer is an accepted value
	        continue;
          }
        else{
            break;
        }
    } while(1);
    
	int temp=(intMask>>replacement)&1;  //declaring temp variable and initializing with bit from mask
	
	if(temp==1){ //if-else function for if bit is 1 or 0
		temp=temp<<replacement; // temp shifted to the left as many times as indicated by user input (int replacement)
		intNum|=temp; //bitwise OR operation to manipulate user input
	}
	else{
		int flag=4294967295; // declares flag variable and initializes it with the highest unsigned 32 bit integer
		temp=1<<replacement; // shifts one to left as many times as indicated by user input (int replacement)
		flag=flag^temp; // the flag is then initialized with its value to the power of temp (bit shifts of 1)
		intNum&=flag; //intNum is now initialized with flag variable's value
	}
	printf("New integer with bit %d is %d\n",replacement,intNum); //print statement of new value
}
