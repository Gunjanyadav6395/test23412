#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a=0,b=1,c;
    printf("Enter a number");
    scanf("%d",&n);
    if(n==a || n==b)
    printf("fibonacci");
    c=a+b;
    while(c<n)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if(c==n)
    printf("fibonacci");
    else
    printf("not fibonacci");
    return 0;
}
