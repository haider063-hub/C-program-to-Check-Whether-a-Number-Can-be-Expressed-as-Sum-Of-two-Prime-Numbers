#include<stdio.h>
int checkfunction(int num);
void main() {
	int number, flag = 0;
	printf("\n C program to Check Whether a Number Can be Expressed as Sum Of two Prime Numbers\n");
	printf("__________________________________________________________________________________\n");
	printf("\n Enter the number: ");
	scanf("%d", &number);
	printf("__________________________________________________________________________________\n");

	for(int i = 2; i <= number/2; i++) //Here in condition, we divide number by 2 in order not to repeat the primt numbers
	{
		for(int j = 2; j <= number; j++)
		{
			if((i+j==number)) 
			{
				if(checkfunction(i) && checkfunction(j) == 1) //Check whether both numbers are prime or not
				{
					printf("\n %d + %d = %d\n", i, j, number) ;
					printf(" Prime Numbers are %d and %d\n",i, j);
					flag = 1;
				}
			}
		}
	}
	if(flag == 0)
	{
		printf("\n This Number Can't Expressed as Sum Of two Prime Numbers");
		printf("\n________________________________________________________________________\n");
	}
}

//FUNCTION
int checkfunction(int num) {
	int count = 0, r = 1;

	for(int i=1; i <= num; i++) 
	{
		if (num % i == 0)
			count++;
	}

	if(count == 2) 
		r = 1;
	else
		r = 0;
	return r;
}