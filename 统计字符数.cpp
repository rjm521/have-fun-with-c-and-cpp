#include<algorithm>
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
/************************************************* 

**File name： 统计字符数
**Author：Jimmy Rain
**Copyright:

**Date:2019-04-02 
**
Description:描述主要实现的功能 
**  ---------------------

**************************************************/

#define MAX 10001



int main()
{
    char str[MAX];
    int ch[26]={0};
    int T;
    cin>>T;
    while(T--)
    {
        cin>>str;
        int length=strlen(str);
        for(int i=0;i<length;i++)
        {
            ch[str[i]-'a']++;
        }
       int *m=max_element(ch,ch+26);
       int max=*m;
       for(int i=0;i<26;i++)
       {
           if(ch[i]==max)
           {
                printf("%c %d\n",i+'a',max);
                break;
           }
       }

    }
    return 0;
}
