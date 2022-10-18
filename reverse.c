#include <math.h>
#include <stdio.h>


// Brandon Tsuchiya
// CSCE 3600: Systems Programming
// 10/19/2022


int  num_input(int num)
{
        scanf("%d", &num);

	if (num >= 2000000000 || num <= 0)
	{
        	printf("Enter a positive integer less than 2 billion: ");
		num_input(num);
	}
	else
	{
		return num;
	}
}

void binary_converter(int num)
{
	int orig_num = num;
	int result;
	int binary_num[31];
	int i;

	for (i = 31; i >= 0; i--){
		result = num >> i;

	if (result & 1)
		binary_num[i] = 1;
	else
		binary_num[i] = 0;
	}

	int total = 0;
	int sum = 0;
	int x = 31;

	for (i = 0; i <= 31; i++)
	{
		if (binary_num[i] == 1)
		{
			sum = pow(2,x);
			total += sum;
		}
		x--;
	}

	printf("%d with bits reversed is %d\n", orig_num, total);
}

int main(){

printf("Enter a positive integer less than 2 billion: ");

int num = num_input(num);
binary_converter(num);

return 0;

}
