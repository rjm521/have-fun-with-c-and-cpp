#include<cstdio>
#include<map>
using namespace std;
/**
  * //他们都说是水题
  * @param xxx does this (this is the documentation keyword)
  * @authr some user (this is the documentation keyword error)
  */


  int main()
  {
      int n,t,temp;
      scanf("%d%d",&n, &t);
      map<int, int> a;

      for(int i=1;i<n;i++)
      {

          scanf("%d",&temp);
          a.insert(pair<int,int>(i,temp));
      }
      map<int,int>::iterator it;
      int current_pos=1;
      while(current_pos < t)
      {
          it = a.find(current_pos);
          if(it!=a.end())
              current_pos += a[current_pos];
          else
            break;
      }
      if(current_pos == t)
      {
          printf("YES");
      }
      else
      {
          printf("NO");
      }

      return 0;
  }
