#include<stdio.h>
int main()
{
    int num=153,rem,sum=0,temp;
    printf("Enter a number:");
    scanf("%d",&num);
    temp=num;
    while(num)
    {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }
    if(temp==sum)
        printf("%d is armstrong number\n",temp);
    else
        printf("%d is not armstrong number\n",temp);
    return 0;

}
