#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
/************************************************* 

**File name：487-3279
**Author：Jimmy Rain
**Copyright:

**Date:2019-04-02 
**
Description:描述主要实现的功能 
**  ---------------------

**************************************************/
#define MAX 100000
char map[]="2223334445556667777888999";
char str[80];
char Tell_numbers[MAX][9];


void Change(int n)
{
    int j,k;


    j=k=-1;
    while(k<8)
    {
        j++;
        if(str[j]=='-')
            continue;
        k++;
        if(k==3)
        {
            Tell_numbers[n][k]='-';
            k++;
        }
        if(str[j]>='A' && str[j]<='Z')
        {
            Tell_numbers[n][k]=map[str[j]-'A'];
            continue;
        }
        Tell_numbers[n][k]=str[j];
    }
    Tell_numbers[n][k]='\0';
    return;




}

int compare(const void *elem1, const void *elem2)
{
    return (strcmp((char*)elem1,(char*)elem2));
};


int main()
{
    int n;
    int m=0;
    int j;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {   scanf("%s",str);
        Change(i);
    }
    qsort(Tell_numbers,n,9,compare);
    bool none=true;
    while(m<n)
    {
        j=m;
        m++;
        while(m<n && strcmp(Tell_numbers[m],Tell_numbers[j])==0) m++;
        if(m-j>1)
        {
            printf("%s %d\n", Tell_numbers[j], m-j);
            none=false;
        }


    }
    if(none)
        printf("No duplicates.\n");

    return 0;
}
