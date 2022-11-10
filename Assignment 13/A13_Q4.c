// Author: Ritik Sharma

void greeting();

#include <stdio.h>
int main()
{
    greeting();
    return 0;
}

void greeting()
{
    int d;
    printf("Enter the day number of the week: ");
    scanf("%d", &d);
    switch (d)
    {
    case 1:
    {
        printf("Do not store your dream in your eyes. They may roll down with tears, store them in your heart. Each heartbeat will inspire and motivate you to fulfil them. Have a great day!");
        break;
    }
    case 2:
    {
        printf("May God be with you today and always. May he shower all his blessing on you every day. I hope that you have a great day!");
        break;
    }
    case 3:
    {
        printf("Have hope in God and start your day with positive thoughts. Have a great day!");
        break;
    }
    case 4:
    {
        printf("May this day bring you all the best wishes and feeling to you. May this day bring all the positivity to you. Have a great day!");
        break;
    }
    case 5:
    {
        printf("Wishing you a great day ahead, may you achieve whatever you have planned for today.");
        break;
    }
    case 6:
    {
        printf("Planning the day makes if easier to follow, here's to another great day!");
        break;
    }
    case 7:
    {
        printf("You always look after new things in life, may you find pleasure in whatever you do, have a great day ahead!");
        break;
    }
    default:
    {
        printf("Invalid Input!");
        break;
    }
    }
}