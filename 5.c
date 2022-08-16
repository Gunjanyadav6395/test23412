#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,i,min;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    min=a<b?a:b;
    for(i=2;i<=min;i++){
     if(a%1==0&&b%1==0)
            break;
    }
    if(1==min+1)
        printf("%d add %d are co-prime",a,b);
    else
        printf("%d and %d are not co prime",a,b);

}
