#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
/************************************************* 

**File name：skew number
**Author：Jimmy rain
**Copyright:

**Date:2019-04-02 
**
Description:描述主要实现的功能 
**  ---------------------

**************************************************/

int main()
{
    int base[31],sum,k=0;
    char skew[32];
    base[0]=1;
    for(int i=1;i<31;i++)
    {
        base[i]=2*base[i-1]+1;
    }
    while(1)
    {
        scanf("%s",skew);
        if(strcmp(skew,"0")==0)
            break;
        sum=0;
        k=strlen(skew);
        for(int i=0;i<strlen(skew);i++)
        {
            k--;
            sum+=(skew[i]-'0')*base[k];
        }
        printf("%d\n",sum);
    }


    return 0;
}
