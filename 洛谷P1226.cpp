#include<cstdio>
/**
  *题目描述：输入b，p,k的值，求b^p mod k 的值。 其中 b，p， k*k 为长整型数
  * @authr Jimmy
  */
  #define ll long long
  ll LLpow(ll b, ll p, ll k)
  {
      if(p == 0)
      {
          return 1%k;
      }
      else if(p&1 )
      {
          return b*LLpow(b,p-1,k)%k;
      }
      else
      {
          ll temp = LLpow(b,p/2,k);
          return temp*temp%k;
      }
  }

  int main()
  {
      ll b,p,k;
      scanf("%lld%lld%lld",&b,&p,&k);
      ll result = LLpow(b,p,k);
      printf("%lld^%lld mod %lld=%lld",b,p,k,result);


      return 0;
  }
