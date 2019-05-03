#include<stdio.h>
#include<string.h>

/************************************************* 

**File name：字串
**Author：Jimmy Rain
**Copyright:

**Date:2019-04-03 
**
Description:描述主要实现的功能 
**  ---------------------

**************************************************/
char str[100][101];
char zichuan[101];
char fanzichuan[101];
int T,N,len_min=101,len,min_index;

void Print()
{
    int found;
    for(int j=len_min; j>=0; j--)
    {
        for(int s=0;s<len_min;s++)
        {
            strncpy(zichuan,str[min_index]+s,j);
            strncpy(fanzichuan,str[min_index]+s,j);
            fanzichuan[j]=zichuan[j]='\0';
            strrev(fanzichuan);
            found=1;
            for(int k=0;k<N;k++)
            {
                if(strstr(str[k],zichuan)==NULL && strstr(str[k],fanzichuan)==NULL)
                {
                    found=0;
                    break;
                }
            }
            if(found)
            {
                printf("%d\n",strlen(zichuan));
                return;
            }

        }

    }
        printf("0\n");
        return;
}

int main()
{

    scanf("%d",&T);
    while(T!=0)
    {
        scanf("%d",&N);
        for(int i=0;i<N;i++)
        {
            scanf("%s",str[i]);
            len=strlen(str[i]);
            if(len<len_min)
            {
                len_min=len;
                min_index=i;

            }

        }
        Print();
        T--;
    }


    return 0;
}
