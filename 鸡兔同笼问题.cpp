#include<stdio.h>
#include<iostream>
using namespace std;
/************************************************* 

**File name：鸡兔同龙问题
**Author：Jimmy
**Copyright: 
Author: Jimmy

**Date:2019-03-31 
**
Description:描述主要实现的功能 
**

**************************************************/
int main()
{
    int nClass, i, nFeet;
    cin>>nClass;
    for (int i=0; i<nClass ; i++ )
    {
        scanf("%d",&nFeet);
        if(nFeet&1 ==1)
            printf("0 0\n");
        else if(nFeet%4 != 0)
        {
            printf("%d %d\n",nFeet/4+1, nFeet/2);

        }
        else
        {
            printf("%d %d\n",nFeet/4, nFeet/2);

        }

    }
}
