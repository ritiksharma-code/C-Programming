#include <stdio.h>

void result();

int main()
{
    return 0;
}

void result()
{
    int marks, total, percentage;
    int total=1000;
    printf("Enter the marks obtained: ");
    scanf("%d", &marks);
    printf("Obtained marks are %d.", marks);
    percentage=marks/total*100;
    printf("\nPercentage is %d.", percentage);

    if(percentage>=75)
    {
        printf("\nFirst Division.");
    }

    else if(percentage>=50&&<75)
    {
        printf("\nSecond Division.");
    }
    else if(percentage>=30&&<50)
    {
        printf("\nThird Division.");
    }
    else
    [
        printf("\nFAIL.");
    ]
}