#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cstdlib>
using namespace std;
typedef long long ll;          //long long ��
const double PI = acos(-1.0);  //PIԲ����
const double eps = 1e-6;       //eps����
const int INF = 1000000000;    //������
const int maxn = 101;
int prime[maxn];
bool p[maxn]={0};
int pnum=0;

void Euler_Prime_Find(int n)
{
    for(int i=2;i<n;i++)
    {
        if(!p[i]) prime[pnum++]=i;
        for(int j=0;j<pnum;j++)
        {
            if(i*prime[j]> n) break;
            p[i*prime[j]]=true;
            if(i%prime[j]==0) break;
        }

    }
}


int main()
{
   Euler_Prime_Find(100);
   for(int i=0;i<pnum;i++)
       printf("%d  ", prime[i]);



     return 0;
}
