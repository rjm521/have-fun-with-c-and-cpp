#include<cstdio>
#include<cmath>
  bool IsPrime(int n)
  {
      if(n <= 1)
        return false;
      else
      {
          int m=(int)sqrt(n); //(int)sqrt(3) = 1  emm......
          for(int i=2; i<=m+1;i++)
          {
              if(n%i == 0)
                return false;
          }
          return true;
      }
  }

  int main()
  {
      int number;
      printf("Function: Judge a positive integer is a Prime or not.\n");
      printf("Please input a positive integer:\n");
      scanf("%d", &number);
      if(IsPrime(number))
      {
          printf("%d is a prime!\n",number);
      }
      else
      {
          printf("%d is not a prime!\n",number);
      }
      return 0;
  }
