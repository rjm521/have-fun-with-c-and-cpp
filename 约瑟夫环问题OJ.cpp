#include<cstdio>
/**
  * This is a documentation comment block
  * @param xxx does this (this is the documentation keyword)
  * @authr some user (this is the documentation keyword error)
  */
  int Find(int m, int n)
  {
      int people[m]={0};
      int count=0,index=0;
      int alive=m;
      while(alive>0)
      {
          count+=1-people[index];
          if(count == n)
          {
              if(alive == 1)
                return index+1;
                //printf("%d",index+1)S;
              //else
              //  printf("%d,",index+1);
              people[index]=1;
              count=0;
              alive--;

          }


          index=(index+1)%m;


      }



  }

  int main()
  {

      int m,n,last;
      while(1)
      {
          scanf("%d%d",&m,&n);
          if(m==0 && n==0)
            break;
          last = Find(m,n);
          printf("%d\n",last);
      }




      return 0;
  }

