#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,t,sum=0,n,i;
    prinf("enter the value for a:");
    scanf("%d",&n);

    i=1;
    while(i<=n)
    {
        a=i;
        sum=0;
        while(a>0)
{
    t=a%10;
    sum=sum+t*t*t;
    a=a/10;
}
if(sum==i)
{
    printf("%d,",i);
}
i++;
}

    }

    return 0;
}
