#include <stdio.h>
int main()
{
    char s[] = "   A clever dox jumps over the lazy    dog    ";
    int c=0, i=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i+1]==32)
        {
            continue;
        }
        if(s[i]!=32&&s[i-1]==32)
        {
            c++;
        }
    }
    printf("%d", c++);
    
}




/*#include <stdio.h>
int main()
{
    char s[] = "   A clever dox jumps over the lazy    dog    ";
    int c=0, i=0;
    if(s[0]==' ')
    {
       c--; 
    }
    if(s[(sizeof(s-1))]==' ')
    {
       c--;
    }
    while(s[i]!='\0')
    {
        
        if(s[i+1]==' ')
        {
            i++;
            continue;
        }
        if(s[i]==' ')
        {
            c++;
        }
        i++;
    }
    printf("%d", c);
    return 0;
}*/