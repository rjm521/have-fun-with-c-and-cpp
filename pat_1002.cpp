#include<iostream>
#include<stdio.h>
#include<string.h>

#define MAX 102

using namespace std;

int main()
{
    char line[MAX];
    int sum=0,len=0,a,b,c;
    scanf("%s",line);
    len=strlen(line);
    for(int i=0;i<len;i++)
    {
        sum=sum+(line[i]-'0');
    }
    if(sum<=9 && sum>=0)
    {
        switch (sum)
            {
                case 0:printf("ling");break;
                case 1:printf("yi");break;
                case 2:printf("er");break;
                case 3:printf("san");break;
                case 4:printf("si");break;
                case 5:printf("wu");break;
                case 6:printf("liu");break;
                case 7:printf("qi");break;
                case 8:printf("ba");break;
                case 9:printf("jiu");break;
            }


    }
    if(sum<=99 && sum>=10)
    {
        a=sum/10;
        b=sum%10;
        switch (a)
            {
                case 0:printf("ling ");break;
                case 1:printf("yi ");break;
                case 2:printf("er ");break;
                case 3:printf("san ");break;
                case 4:printf("si ");break;
                case 5:printf("wu ");break;
                case 6:printf("liu ");break;
                case 7:printf("qi ");break;
                case 8:printf("ba ");break;
                case 9:printf("jiu ");break;
            }
        switch (b)
            {
                case 0:printf("ling");break;
                case 1:printf("yi");break;
                case 2:printf("er");break;
                case 3:printf("san");break;
                case 4:printf("si");break;
                case 5:printf("wu");break;
                case 6:printf("liu");break;
                case 7:printf("qi");break;
                case 8:printf("ba");break;
                case 9:printf("jiu");break;
            }

    }
    if(sum>=100 && sum<=999)
    {
        a=sum/100;
        b=(sum-(a*100))/10;
        c=(sum-(a*100))%10;
        switch (a)
            {
                case 0:printf("ling ");break;
                case 1:printf("yi ");break;
                case 2:printf("er ");break;
                case 3:printf("san ");break;
                case 4:printf("si ");break;
                case 5:printf("wu ");break;
                case 6:printf("liu ");break;
                case 7:printf("qi ");break;
                case 8:printf("ba ");break;
                case 9:printf("jiu ");break;
            }
        switch (b)
            {
                case 0:printf("ling ");break;
                case 1:printf("yi ");break;
                case 2:printf("er ");break;
                case 3:printf("san ");break;
                case 4:printf("si ");break;
                case 5:printf("wu ");break;
                case 6:printf("liu ");break;
                case 7:printf("qi ");break;
                case 8:printf("ba ");break;
                case 9:printf("jiu ");break;
            }
        switch (c)
            {
                case 0:printf("ling");break;
                case 1:printf("yi");break;
                case 2:printf("er");break;
                case 3:printf("san");break;
                case 4:printf("si");break;
                case 5:printf("wu");break;
                case 6:printf("liu");break;
                case 7:printf("qi");break;
                case 8:printf("ba");break;
                case 9:printf("jiu");break;
            }
    }

    return 0;
}
