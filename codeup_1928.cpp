#include<cstdio>
/**
  * This is a documentation comment block
  * @param xxx does this (this is the documentation keyword)
  * @authr some user (this is the documentation keyword error)
  */
  //定义为13长为了1对应1月份，12对应12月份  0->平年  1->闰年
  int month[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
  int IsLeap(int y)   //闰年：Leap Year
  {
      if((y%4==0 && y%100!=0 )|| y%400==0 )
      {
          return 1;
      }
      else
      {
          return 0;
      }
  }



  int main()
  {
      int Date1,Date2;
      int y1,y2,m1,m2,d1,d2;
      int sum;
      while(scanf("%d%d",&Date1, &Date2)!=EOF)
      {
            if(Date1<Date2)
            {
                int temp=Date2;
                Date2=Date1;
                Date1=temp;
            }
            y1=Date1/10000;
            y2=Date2/10000;
            m1=Date1%10000 /100;
            m2=Date2%10000 /100;
            d1=Date1%100;
            d2=Date2%100;
            sum=1;
            while(!(y1==y2 && m1==m2 && d1==d2))
            {
                d2++;
                if(d2 == month[m2][IsLeap(y2)]+1)
                {
                    m2++;
                    d2=1;
                }
                if(m2 == 13)
                {
                    y2++;
                    m2=1;
                }
                sum++;
            }
            printf("%d\n",sum);  //注意换行
      }
      return 0;
  }
