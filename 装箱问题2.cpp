#include<stdio.h>
#include<iostream>
using namespace std;
/************************************************* 

**File name：装箱问题 Bin packing problem
**Author：Jimmy Rain
**Copyright:

**Date:2019-04-01 
**
Description:描述主要实现的功能 
**  ---------------------

**************************************************/

int  main()
{
    int SUM,a,b,c,d,e,f,y,x;

    int u[4]={0, 5, 3, 1};

    while(1)
    {
        scanf("%d%d%d%d%d%d",&a, &b, &c, &d, &e, &f);
        if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0)
            break;
        SUM=f+e+d+(c+3)/4;
        y=5*d+u[c%4];
        if(b>y) SUM += (b-y+8)/9;
        x = 36*SUM - 36*f- 25*e- 16*d - 9*c -4*b;
        if(a>x) SUM += (a-x+35)/36;

        printf("%d\n",SUM);
    }
}
