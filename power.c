#include <stdio.h>
#include <stdbool.h>

//CREATED BY ERIC TSUCHIYA
//EUID: ert0068

//Finds the next value that is a power of 2 if user did not enter a number that is a power of 2.
//Contains the same bitwise operation logic. Will return the next higher int value that is a power of 2.
int findNext(int value)
{
	bool found = false;

	//while loop - find the next higher int that is a power of 2. If not found, increment value. Once found, send it back.
	while(found != true)
	{
		value++;
		//Exact same logic as powerFunction (scroll down)
		int storedVal = value;
		int count = 0;
		while (storedVal >= 1)
		{
		int x = storedVal & 1;
		storedVal = storedVal >> 1;
		if(x == 1)
		{count++;}
		}

		if (count > 1)
		{
			//do nothing
		}
		else if (count = 1)
		{
			found = true;
			break;
		}
	}
	return value;
}

//Main power.c function.
int powerFunction (int userInput){

	//storedVal stores the value of userInput so that it can be manipulated
	int storedVal = userInput;
	int count = 0;

	//While loop to determine if user entered number is a power of 2 or not.
	while (storedVal >= 1)
	{
	int x = storedVal & 1; //Checks first bit of user entered value. If 1, add +1 to count.
	storedVal = storedVal >> 1; //Right shift operator. 
	if (x == 1) //If the bit = 1, add to count.
	{count++;}
	}
	
	//If there are more than one 1's, it is not a power of 2.
	if (count > 1){
		printf("%d IS NOT a power of 2\n", userInput);
		int nextVal = findNext(userInput);
		printf("Next higher integer that is a power of 2 is: %d\n", nextVal);
	}
	else if (count = 1){
		printf("%d IS a power of 2\n", userInput);
		//int nextVal = findNext(userInput);
		//printf("%d is the next higher power of 2 integer found.", nextVal);
	}
	return 0;
}

int main(){ //REMOVE WHEN MAKEFILE IMPLEMENTED
	powerFunction(64);
	powerFunction(66);
}
