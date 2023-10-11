#include <stdio.h>

int main(void) {
	// your code goes here
	int t, a1, a2, a3, b1, b2, b3, alice, bob;
	scanf("%d", &t);
    while(t--)
	{
        scanf("%d%d%d%d%d%d", &a1, &a2, &a3, &b1, &b2, &b3);
        if(a2>=a1&&a2>=a3)
        {
            if(a1>=a3)
            {
                alice=(a2*100)+(a1*10)+a3;
            }
            else if(a3>=a1)
            {
                alice=(a2*100)+(a2*10)+a1;
            } 
        }
        else if(a1>=a2&&a1>=a3)
        {
            if(a2>=a3)
            {
                alice=(a1*100)+(a2*10)+a3;
            }
            else if(a3>=a2)
            {
                alice=(a1*100)+(a3*10)+a2;
            } 
        }
        else if(a3>=a1&&a3>=a2)
        {
            if(a1>=a2)
            {
                alice=(a3*100)+(a1*10)+a2;
            }
            else if(a2>=a1)
            {
                alice=(a3*100)+(a2*10)+a1;
            }
        }
        if(b2>=b1&&b2>=b3)
        {
            if(b1>=b3)
            {
                bob=(b2*100)+(b1*10)+b3;
            }
            else if(b3>=b1)
            {
                bob=(b2*100)+(b2*10)+b1;
            } 
        }
        else if(b1>=b2&&b1>=b3)
        {
            if(b2>=b3)
            {
                bob=(b1*100)+(b2*10)+b3;
            }
            else if(b3>=b2)
            {
                bob=(b1*100)+(b3*10)+b2;
            } 
        }
        else if(b3>=b1&&b3>=b2)
        {
            if(b1>=b2)
            {
                bob=(b3*100)+(b1*10)+b2;
            }
            else if(b2>=b1)
            {
                bob=(b3*100)+(b2*10)+b1;
            }
        }
        if(bob>alice)
        {
            printf("Bob\n");
        }
        else if(alice>bob)
        {
            printf("Alice\n");
        }
        else if(alice==bob)
        {
            printf("Tie\n");
        }
	}
	return 0;
}