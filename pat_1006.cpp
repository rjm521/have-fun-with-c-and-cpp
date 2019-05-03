#include<stdio.h>

int main()
{
    int nums,a,b,c;
    scanf("%d",&nums);
    a=nums/100;
    while(a>0)
    {
        printf("B");
        a--;
    }
    b=nums/100;
    b=(nums-100*b)/10;
    while(b>0)
    {
        printf("S");
        b--;
    }
    c=nums%10;
    if(c!=0)
    {
    for(b=1;b<=c;b++)
    {
        printf("%d",b);
    }

    }
    else
    {
        //printf("0");
    }

    return 0;
}
