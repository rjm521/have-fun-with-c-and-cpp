#include<iostream>
#include<string>
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

string str[101];

int main()
{
    int n;
    cin>>n;
    string ans;
    for(int i=1;i<=n;i++)
      {
         cin>>str[i];

      }
   ans=str[1];
   for(int i=2;i<=n;i++)
   {
       if((str[i].size()>ans.size() )||(str[i].size()==ans.size() && str[i]<ans) )
        ans=str[i];

   }
   cout<<ans;



     return 0;
}
