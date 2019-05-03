#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
/************************************************* 

**File name：校门外的树
**Author：   Jimmy Rain
**Copyright:

**Date:2019-04-01 
**
Description: POJ  此方法为暴力 
**  ---------------------

**************************************************/

#define MAX 1001

int main()
{
    int result=0;
    bool sum[MAX]={};
    int L,M,a,b;
    scanf("%d%d", &L, &M);
    while(M!=0)
    {
        scanf("%d%d",&a, &b);
        for(int i=a;i<=b;i++)
        {
            sum[i]=true;

        }


        M--;
    }
    for(int j=0;j<=L;j++)
    {
        if(sum[j]!=true)
        {
            ++result;
        }
    }
    printf("%d",result);
    return 0;
}
