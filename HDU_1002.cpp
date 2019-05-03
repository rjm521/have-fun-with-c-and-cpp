#include<stdio.h>
#include<string.h>

#define MAX 1010

char line1[MAX+10];
char line2[MAX+10];
int  num1[MAX+10];
int  num2[MAX+10];
int n;
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",line1);
        scanf("%s",line2);
        printf("Case %d:\n",i+1);
        printf("%s + %s = ",line1,line2);
        memset(num1,0,sizeof(num1));
        memset(num2,0,sizeof(num2));
        int k=0;
        for(int j=strlen(line1)-1;j>=0;j--)
        {
            num1[k++]=line1[j]-'0';
        }
        k=0;
        for(int j=strlen(line2)-1;j>=0;j--)
        {
            num2[k++]=line2[j]-'0';
        }
        for(k=0;k<MAX;k++)
        {
            num1[k]+=num2[k];
            if(num1[k]>=10)
            {
                num1[k]-=10;
                num1[k+1]++;
            }
        }
        k=0;
        bool output = false;
        for(k=MAX;k>=0;k--)
        {
            if(output)
                printf("%d",num1[k]);
            else if(num1[k])
            {
                printf("%d",num1[k]);
                output = true;
            }
        }
        int s=0;
        for(k=MAX;k>=0;k--)
        {
            s+=num1[k];
        }
        if(s==0)
        {
            printf("0");
        }
        if(i!=(n-1))
         printf("\n\n");
        else
         printf("\n");
    }





    return 0;
}
