#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
/*此代码已AC*/
using namespace std;
const int maxn=1000001;
int factor[maxn];
int prime[maxn]={0};
int pnum=0;
bool p[maxn]={false};

void find_prime()
{
    for(int i=2;i<maxn;i++)
    {
        if(!p[i]) prime[pnum++]=i;
        for(int j=0;j<pnum;j++)
        {
            if(i*prime[j]>maxn) break;
            p[i*prime[j]]=true;
            if(i%prime[j]==0) break;

        }

    }
    p[0]=true;
    p[1]=true;
}


void prime_fact(int n)
{
    for(int i=n;i>=1;i--)
    {
        if(!p[i])
            factor[i]++;
        else
        {
            int temp=i;
            int  s=(int)sqrt(1.0*temp);
            for(int j=0;j<pnum && prime[j]<=s;j++)
            {
                if(temp%prime[j]==0)
                {
                    while(temp%prime[j]==0)
                    {
                        factor[prime[j]]++;
                        temp /= prime[j];
                    }

                }
             if(temp == 1) break;

            }
            if(temp!=1)
            {
                factor[temp]++;
            }

        }
    }
}

void print()
{
    for(int i=1;i<=maxn-1;i++)
    {
        if(factor[i]!=0)
        {
            printf("%d %d\n",i,factor[i]);
        }
    }
}
int main()
{
    memset(factor,0,sizeof(factor));
    find_prime();
    int n;
   // freopen("test_in.txt","r",stdin); //输入重定向，输入数据将从in.txt文件中读取
  //  freopen("test_out.txt","w",stdout);
    scanf("%d", &n);
    if(n==1)
    {
        printf("1 1");
        return 0;
    }

    prime_fact(n);
    print();
   // fclose(stdin);//关闭文件
   // fclose(stdout);//关闭文件return 0;

    return 0;
}
