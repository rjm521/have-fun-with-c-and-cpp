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

int  maxSubArray(int* nums, int numsSize)
{
    int len=numsSize;
    int dp[len];
    int *m=NULL;
    for (int i=0; i<len;i++ )
        {
            if(i==0)
            {
                dp[i]=nums[i];
            }
            else
            {
                dp[i]=max(dp[i-1]+nums[i],nums[i]);
            }

        }
    m=max_element(dp,dp+len);
    return *m;


}


int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size ;i++ )
        scanf("%d", &arr[i]);
    //maxSubArray(arr, size);
    printf("%d",maxSubArray(arr, size));





     return 0;
}
