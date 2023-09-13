#include <stdio.h>
int main()
{
	
	//Taking input for first number and putting the value in the variable firstnum.
	int firstnum;
	printf("Enter First Number. ");
	scanf("%d",&firstnum);
	printf("You entered %d.",firstnum);
	
	//Taking input for second number and putting the value in the variable secondnum.
	int secondnum;
	printf("\n Enter Second Number. ");
	scanf("%d",&secondnum);
	printf("You entered %d.",secondnum);
	
	//adding both the numbers and putting the value in the variable sum.
	int sum;
	sum=firstnum+secondnum;
	printf("\n The sum of both numbers is %d.",sum);
	
	return 0;
}
