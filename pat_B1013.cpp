#include<stdio.h>
const int maxn = 1000001;
int prime[maxn], pNum = 0;   //用来存放素数 pNum表示第几个素数
bool p[maxn] = {0};          // O表示是素数，相反表示不是素数
void Find_Prime(int n)
{
    for (int i=2;i<maxn ;i++ )
    {
        if(p[i]==false)       //如果是素数
            prime[pNum++]=i;
            if(pNum>=n) break;  //放入表中
        for (int j=i+i; j<maxn;j+=i )
            p[j]=true;        //并将该素数的倍数都排除
    }

}

int main()
{

    int m,n,j=0;
    scanf("%d%d",&m ,&n);
    Find_Prime(n);
    for(int i=m; i<=n; i++)
    {
        printf("%d",prime[i-1]);
        j++;
        if( j%10 !=0 && i<n) printf(" ");
        else printf("\n");


    }
    return 0;
}
