// Author: Ritik Sharma
#include <stdio.h>
/* Convert Farenheit temperature to Celcius equivalent*/
int main()
{

    int fahr, celcius;
    printf("Enter temperaturn in Fahr\n");
    scanf("%d", &fahr);
    celcius=5/9 * (fahr-32);        //Conversion in celcius will always be 0
    
    //Uncomment the following test your output (comment the previous celcius calculation)
    //celcius = 5 * (fahr-32) / 9;        //   
    //celcius = 5.0/9 * (fahr-32);

   printf("Temperature is Celcius is = %d\n", celcius);

   return 0;
}