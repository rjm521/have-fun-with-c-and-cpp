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



int main()
{
    double m, n;
    while(scanf("%lf%lf", &m, &n)!=EOF)
    {
        double cm,cn,lm,ln,rm,rn;
    cm=ceil(sqrt(m));
    cn=ceil(sqrt(n));
    lm=cm-(ceil((cm*cm-m)/2 ));
    ln=cn-(ceil((cn*cn-n)/2 ));
    rm=cm-(ceil( (m-((cm-1)*(cm-1)+1) )/2));
    rn=cn-(ceil( (n-((cn-1)*(cn-1)+1) )/2));
    int t=(int)(abs(cm-cn)+abs(lm-ln)+abs(rm-rn));


    printf("%d\n", t);
    }
     return 0;
}
