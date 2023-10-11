#include<stdio.h>
int main(){
    int a , i,x;
	printf("Enter a number to find the square root: ");
    scanf("%d",&a);

   for(i=1;i<=a;i++)
   {
    if(i*i==a)
	{
		printf("%d", i);
	}
   }
}
