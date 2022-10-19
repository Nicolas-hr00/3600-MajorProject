#include<stdio.h>
#include "major1.h"

void replacebitpos(int intNum)
{
	int intMask,replacement; //variables for integer, integer mask, and the replacement position

    while(1)
    {
	    printf("Enter a positive integer mask up to 3 billion: "); // prompts and reads users integer mask value
	    scanf("%d",&intMask);
        if(intMask>3000000000||intMask<0){ // checks if integer is an accepted value
            continue;
        }
        else{
            break;
        }
    }
    
    while(1)
    {
	    printf("Enter the bit replacement position from mask (0-indexed): "); // prompts and reads users bit replacement position value
	    scanf("%d",&replacement);
	    if(replacement>31||replacement<0){ // checks if integer is an accepted value
	        continue;
          }
        else{
            break;
        }
    }
    
	int temp=(intMask>>replacement)&1;

	if(temp==1){
		temp=temp<<replacement;
		intNum|=temp;
	}
	else{
		int flag=4294967295;
		temp=1<<replacement;
		flag=flag^temp;
		intNum&=flag;
	}
	printf("New integer with bit %d is %d\n",replacement,intNum);
}
