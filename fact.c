#include<stdio.h>
int fact(int n ,int a)
{
    if(n==0)
    {
        return a;
    
    }
    else
    {
       return (fact(n-1,a*n));
       
    }
}
int main()
{
  
    int n ,a=1,ft;
    scanf("%d",&n);
    ft=fact(n ,a);
    printf("%d",ft);
    
    return 0;
}
