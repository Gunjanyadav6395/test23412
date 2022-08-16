#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,M;
    printf("Enter a number");
    scanf("%d %d",&a,&b);
    for(M=a<b?a:b; M>=1;M--)
        if(a%M==0&&b%M==0)
            break;
    printf("HCF is %d",M);
    return 0;
}
