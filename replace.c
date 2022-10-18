#include<stdio.h>
int main()
{
	int intNum=0,intMask,replacement;
    while(1)
    {   
	    printf("Enter a positive integer less than 2 billion: ");
	    scanf("%d",&intNum);
        if(intNum>2000000000||intNum<0){
            continue;
          }
        else{
            break;
        }
    }
    
    while(1)
    {
	    printf("Enter a positive integer mask up to 3 billion: ");
	    scanf("%d",&intMask);
        if(intMask>3000000000||intMask<0){
            continue;
        }
        else{
            break;
        }
    }
    
    while(1)
    {
	    printf("Enter the bit replacement position from mask (0-indexed): ");
	    scanf("%d",&replacement);
	    if(replacement>31||replacement<0){
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
	return 0;
}