#include <stdio.h>

int power(int a,int b);
int main()
{
    int a,b,c;
    printf("give any two number\n");
    scanf("%d%d",&a,&b);
    
    c=power(a,b);
    
    printf("pow of %d is - %d",a,c);
    
}

int power(int a, int b)
{   
    
    int prod=a;
    if(b==0)
    {
        return 1;
    }
    else if(b==1)
    {
        return a;
    }
    else
    {
        for(int i=1;i<b;i++)
        {
          prod*= a ;
        }
        
        return prod;
    }
}
