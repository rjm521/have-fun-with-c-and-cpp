#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cstdlib>
using namespace std;
typedef long long ll;          //long long 型
const double PI = acos(-1.0);  //PI圆周率
const double eps = 1e-6;       //eps精度
const int INF = 1000000000;    //正无穷


//2019-04-24-16.30
//质因子分解

const int maxn = 1000001;
int prime[maxn]={0};
bool p[maxn]={0};
int pnum=0;
struct factor
{
    int x;
    int n;
}fac[100];
int num = 0;
void Find_Prime()   //埃氏筛法
{
    for(int i=2;i<=maxn;i++)
    {
        if(!p[i])    //如果i是质数
        {
            prime[pnum++]=i;

        }
        for(int j=i;j<maxn;j+=i)
            p[j]=true;

    }


}

void Find_yinzi(int n)
{

    int up = (int)ceil(sqrt(n));
    for(int i=0;i<pnum && prime[i]<=up;i++)
    {
        if(n%prime[i]==0)
        {
            fac[num].x=prime[i];
            fac[num].n=0;
            while(n%prime[i]==0)
            {
               fac[num].n++;
               n /=prime[i];
            }

            num++;
            }
      if(n==1) break;
    }
    if(n!=1)
    {
        fac[num].x=n;
        fac[num++].n=1;

    }
}

void Print(int n,int num)
{
    if(n==1)
    {
        printf("1=1");
        return;
    }
    printf("%d=",n);

    for(int i=0;i<num;i++)
    {
       if(i==0)
       {
           if(fac[i].n==1 && fac[i].x!=0)
           printf("%d",fac[i].x);
           else if(fac[i].x!=0 && fac[i].n!=1)
           printf("%d^%d",fac[i].x,fac[i].n);
           else if(fac[i].x==0)
           printf("1");
       }
       else
       {
           if(fac[i].n==1)
           printf("*%d",fac[i].x);
           else
           printf("*%d^%d",fac[i].x,fac[i].n);

       }

    }

}

int main()
{
    int number;
    Find_Prime();
    scanf("%d", &number);
    Find_yinzi(number);
    Print(number,num);


     return 0;
}
