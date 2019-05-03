#include<stdio.h>
#include<math.h>
#include<iostream>
#include<string.h>
using namespace std;
/************************************************* 

**File name：确定进制
**Author：Jimmy Rain
**Copyright:

**Date:2019-04-02 
**
Description:描述主要实现的功能 
**  ---------------------

**************************************************/
long Change(char arr[], int n)
{
    int sum=0;
    int len=strlen(arr);
    for(int i=0;i<len;i++)
    {
        if((arr[i]-'0')>=n)
        {
            return -1;

        }
        sum*=n;
        sum+=(arr[i]-'0');
    }


    return (long)sum;

}
void Print_Result()
{
    char num[3][8];
    scanf("%s%s%s",num[0],num[1],num[2]);
    long  a;
    long  b;
    long  c;
    int i=2;
    for(i=2;i<=16;i++)
    {
        a=Change(num[0],i);
        b=Change(num[1],i);
        c=Change(num[2],i);
        if(a==-1 || b==-1 || c==-1)
        {

        }
        else if( a*b == c)
        {
            printf("%d",i);
            break;
        }
        else
        {
        }
    }
    if(i>16)
    {
        printf("0");
    }


}

int main()
{
    int T=1;

    while(T!=0)
    {
        Print_Result();
        T--;
    }


    return 0;
}
