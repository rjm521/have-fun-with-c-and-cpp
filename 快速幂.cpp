#include<cstdio>
/**
  * This is a documentation comment block
  * @param xxx does this (this is the documentation keyword)
  * @authr some user (this is the documentation keyword error)
  */
  int QuickPow(int x,int N)
  {
      int res=x;
      int ans=1;
      while(N)
      {
          if(N&1)
          {
              ans=ans*res;
          }
          res *= res;   //res为下一位二进制的权值
          N=N>>1;
      }
      return ans;
  }
  int main()
  {

      printf("%d",QuickPow(3,3));
      return 0;
  }
