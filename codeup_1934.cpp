#include<cstdio>
/**
  * This is a documentation comment block
  * @param xxx does this (this is the documentation keyword)
  * @authr some user (this is the documentation keyword error)
  */

  int main()
  {
      int arr[200];
      int n,x,j;
      while(scanf("%d",&n)!=EOF)
      {
          for(int i=0;i<n;i++)
          {
              scanf("%d",&arr[i]);
          }
          scanf("%d",&x);
          for(j=0;j<n;j++)
          {
              if(arr[j]==x)
              {
                  printf("%d\n",j);
                  break;
              }
          }
          if(j>=n)
          {
              printf("-1\n");
          }
      }
      return 0;
  }
