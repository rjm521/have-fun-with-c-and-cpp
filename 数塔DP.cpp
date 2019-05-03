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

int arr[100][100];
int opt[100][100];



int main()
{

   int n,nums;
   scanf("%d", &n);
   while(n--)
   {
       scanf("%d", &nums);
       for(int i=0;i<nums;i++)
       {
           for(int j=0;j<=i;j++)
           {
               scanf("%d", &arr[i][j]);
               if(i==nums-1)
               {
                   opt[i][j]=arr[i][j];
               }

           }

       }
       for(int i=nums-2;i>=0;i--)
       {
           for(int j=0;j<=i;j++)
           {
               opt[i][j]=max(opt[i+1][j],opt[i+1][j+1])+arr[i][j];
              // printf("opt[%d][%d] = %d",i,j, opt[i][j]);
           }
           //printf("\n");

       }
       printf("%d\n",opt[0][0]);


   }


     return 0;
}
