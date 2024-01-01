#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
    scanf("%d", &t);
	while(t--)
	{
	    int i, j;
	    int type[50], nutrition[50], ans=0, n;
	    scanf("%d", &n);
	    for(i=0; i<n; i++)
	    {
	        scanf("%d", &type[i]);
	    }
	    for(i=0; i<n; i++)
	    {
	        scanf("%d", &nutrition[i]);
	    }
	    
	    for(i=0; i<n; i++)
	    {
            if(nutrition[i]<0)
            {
                continue;
            }
            for(j=0; j<n; j++)
            {
                if(i==j)
                {
                    
                    continue;
                }
            }
            else
            {
                if(type[i]==type[i+1])
                {
                    if(nutrition[i]>=nutrition[i+1])
                    {
                        ans=ans+nutrition[i];
                        continue;
                    }
                    else if(nutrition[i+1]>nutrition[i])
                    {
                        ans=ans+nutrition[i+1];
                        continue;
                    }
                }
                else
                {
                    ans=ans+nutrition[i];
                }
            }  
	    }
	    printf("%d\n", ans);
	}
	return 0;
}

