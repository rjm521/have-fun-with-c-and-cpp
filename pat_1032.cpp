#include<stdio.h>
/**
  * This is a documentation comment block
  * @param xxx does this (this is the documentation keyword)
  * @authr some user (this is the documentation keyword error)
  */
  int arr[100000]={0};

  int main()
  {
      int N,number,score,best;
      scanf("%d",&N);
      best=1;
      int bestscore=0;
      for(int i=0;i<N;i++)
      {
          scanf("%d%d",&number,&score);
          arr[number]+=score;
      }
      for(int i=0;i<=N;i++)
      {
          if(arr[i]>bestscore)
          {
              bestscore=arr[i];
              best=i;
          }
      }
      printf("%d %d",best,bestscore);

      return 0;
  }
