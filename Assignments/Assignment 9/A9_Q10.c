// Author: Ritik Sharma

#include <stdio.h>

void bill();

int main()
{	bill();
    return 0;
}

void bill()
{
    int unit, amount,surcharge,total;
    printf("Enter the units: ");
    scanf("%d", &unit);

    if(unit>=0&&unit<50)
    {
        amount=0.50*unit;
        surcharge=amount*20/100;
        total=amount+surcharge;
        printf("The Total electricity bill is %d.", total);
    }
    else if(unit>=50&&unit<150)
    {
        amount=0.75*unit;
        surcharge=amount*20/100;
        total=amount+surcharge;
        printf("The Total electricity bill is %d.", total);
    }
    else if(unit>=150&&unit<250)
    {
        amount=1.20*unit;
        surcharge=amount*20/100;
        total=amount+surcharge;
        printf("The Total electricity bill is %d.", total);
    }
    else if(unit>=250)
    {
        amount=1.50*unit;
        surcharge=amount*20/100;
        total=amount+surcharge;
        printf("The Total electricity bill is %d.", total);
    }
}