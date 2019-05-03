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

/*水题大多都有很深的坑 2333*/
int find_len(int x)
{
    int count=1;
    if(x==1)
        return 1;
    while (x!=1)
    {
        count++;
        if(x&1!=0)  //odd
            x=3*x+1;
        else
            x=x/2;

    }
    return count;
}

int find_len_max(int a,int b)
{
    int len_max=-1;
    for(int i=a;i<=b;i++)
    {
        len_max=max(find_len(i),len_max);

    }

    return len_max;
}


int main()
{

    int a,b;
    int len_max;
    int l,r;
    //freopen("test_in.txt","r",stdin);
    //freopen("test_out.txt","w",stdout);
    while(scanf("%d%d", &a,&b)!=EOF)
    {
        (a>b)?(l=b,r=a):(l=a,r=b);
        len_max=find_len_max(l,r);
        printf("%d %d %d\n",a,b,len_max);
    }
    //fclose(stdin);
    //fclose(stdout);
    return 0;


}
