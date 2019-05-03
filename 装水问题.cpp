#include<cstdio>
#include<cmath>

const double eps=1e-8;
const double PI=acos(-1);
/**
  * This is a documentation comment block
  * @param xxx does this (this is the documentation keyword)
  * @authr some user (this is the documentation keyword error)
  */

  double cal_r(double R, double h)
  {
      double Beta = 2 * acos((R-h)/R);
      double L = 2*sqrt(R*R-(R-h)*(R-h));
      double S1 = ((R*R*Beta)/2) - (L*(R-h)/2);
      double S2 = PI*R*R/2;


      return S1/S2;

  }

  double cal_h(double R, double r)
  {
      double left=0;
      double right=R;
      double mid;
      while(right-left > eps)
      {
          mid=(left+right)/2;
          if(cal_r(R,mid) < r)
          {
              left=mid;
          }
          else
          {
              right=mid;
          }
      }
      return right;
  }


  int main()
  {
      double R,r;
      scanf("%lf%lf", &R, &r);
      printf("%.4f\n",cal_h(R,r));

      return 0;
  }
