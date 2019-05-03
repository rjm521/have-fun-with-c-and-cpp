#include<cstdio>
/**
  * �����2�Ľ���ֵ�����ö��ַ�
  * @param xxx does this (this is the documentation keyword)
  * @authr Jimmy ��Ĵ���  ˼���Ǳ��˵�
  */

  const double eps = 1e-5;   //����Ϊ10^-5

  double f(double x)
  {
      return x*x-2;
  }
  double calSqrt()
  {
      double left = 1, right = 2, mid;   //[left, right] =[1,2]
      while(right - left > eps)          //�����ȴﵽepsʱ�˳�
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
