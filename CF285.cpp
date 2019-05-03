#include<cstdio>
/**
  * This is a documentation comment block
  * @param xxx does this (this is the documentation keyword)
  * @authr some user (this is the documentation keyword error)
  */
  int Find_MAX(int p,int t)
  {
      int result_a = (3*p)/10;
      int result_b = p-(p/250)*t;
      if(result_a > result_b)
        return result_a;
      else
        return result_b;
  }

  int main()
  {
      int a,b,c,d;
      int Misha_scores;
      int Vasya_scores;
      scanf("%d%d%d%d",&a,&b,&c,&d);
      Misha_scores = Find_MAX(a,c);
      Vasya_scores = Find_MAX(b,d);
      if(Misha_scores > Vasya_scores)
        printf("Misha");
      else if(Misha_scores < Vasya_scores)
        printf("Vasya");
      else
        printf("Tie");
      return 0;

  }
