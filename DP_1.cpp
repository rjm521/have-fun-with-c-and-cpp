#include<stdio.h>
int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int A,B;
    int prev[9]={0,0,0,0,1,0,2,3,5};
    int price[9]={0,5,1,8,4,6,3,2,4};
    int opt[9]={0};
    opt[0]=0;
    opt[1]=5;
    for(int i=2;i<=8;i++)
    {
       A=opt[i-1];
       B=opt[prev[i]]+price[i];
       opt[i]=max(A,B);
    }
    for(int i=1;i<=8;i++)
    {
        printf("opt[%d]=%d\n",i,opt[i]);
    }

    return 0;
}
