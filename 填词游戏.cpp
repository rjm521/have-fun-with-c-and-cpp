#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
/************************************************* 

**File name：填词游戏
**Author：Jimmy Rain
**Copyright:

**Date:2019-04-01 
**
Description:描述主要实现的功能   百炼OJ 2801
**  ---------------------

**************************************************/

int main()
{
    int N,M,P;
    char str[11];
    int ch[26];
    int size = 26;
    memset(ch,0,sizeof(int)*size);
    scanf("%d%d%d",&N, &M, &P);
    while(N!=0)
    {
        scanf("%s",str);
        for(int i=0;str[i]!='\0';i++)
        {
            ch[str[i]-'A']++;
        }
        N--;
    }
    while(P!=0)
    {
        char str[200];
        scanf("%s",str);
        for(int i=0;str[i]!='\0';i++)
        {
            ch[str[i]-'A']--;
        }
        P--;
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<ch[i];j++)
        {
            printf("%c",i+'A');
        }
    }
    return 0;
}
