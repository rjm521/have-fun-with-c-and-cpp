#include<cstdio>
#include<algorithm>
using namespace std;
const double eps = 1e-6;
double woods[10001];
int calnums(double arr[],int n, double len)
{
    int nums = 0;
    for(int i=0;i<n;i++)
    {
        nums+=(int)(arr[i]/len);
    }
    return nums;
}

int main()
{
    int n,k;
    scanf("%d%d", &n, &k);
    double left=0;
    double right=0;
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&woods[i]);
        right=max(right,woods[i]);
    }
    double mid=0;
    while(right-left >= eps)
    {
        mid = (left+right)/2;
        if(calnums(woods,n,mid) < k)
            right=mid;
        else
            left=mid;

    }
if((int)(right*1000)%10>=5)
		right-=0.005;
    printf("%.2f\n",right);

    return 0;
}
