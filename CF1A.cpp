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



int main()
{
     int n,m;
     int a;
     ll x,y;
     scanf("%d%d%d",&n,&m,&a);
     x=(ll)ceil((double)n/a);
     y=(ll)ceil((double)m/a);
     //printf("x=%d,y=%d",x,y);
     printf("%lld",x*y);
     return 0;
}
