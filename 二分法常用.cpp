#include<cstdio>
/**
  * 求根号2的近似值，采用二分法
  * @param xxx does this (this is the documentation keyword)
  * @authr Jimmy 码的代码  思想是别人的
  */

  const double eps = 1e-5;   //精度为10^-5

  double f(double x)
  {
      return x*x-2;
  }
  double calSqrt()
  {
      double left = 1, right = 2, mid;   //[left, right] =[1,2]
      while(right - left > eps)          //当精度达到eps时退出
      {
          mid = (left + right)/2;
          if(f(mid)> 0)
          {
              right = mid ;
          }
          else
          {
              left = mid  ;
          }

      }
      return mid;
  }
  int main()
  {
      printf("%.3f",calSqrt());
      return 0;
  }
