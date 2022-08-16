#include<stdio.h>
int  main()
{
    int t1=0,t2=1,nextterm=0,n,i;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n==0||n==1)
    printf("%d",n);
    else
    nextterm=t1+t2;
    for(i=3;i<=n;++i)
    {
        t1=t2;
        t2=nextterm;
        nextterm= t1+ t2;
    }
    printf("%d",t2);
    return 0;
}
