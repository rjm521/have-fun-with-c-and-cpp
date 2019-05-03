#include<cstdio>
#include<algorithm>
using namespace std;
/**
  * This is a documentation comment block
  * @param xxx does this (this is the documentation keyword)
  * @authr some user (this is the documentation keyword error)
  */

 int  number[4];
 int  ten[4]={1000,100,10,1};

 void int_to_array(int num)           //数字转换为数组
 {


        number[0] = num/1000;
        number[1] = (num%1000)/100;
        number[2] = (num%100)/10;
        number[3] =  num%10;

 }

 int array_to_int(int arr[],int n)   //数组转换为数字
 {
     int num=0;
     for(int i=0;i<n;i++)
     {
         num += arr[i]*ten[i];
     }
     return num;

 }

 bool cmp1(int a,int b)    //从大到小排序
 {
     if(a>=b)
        return true;
     else
        return false;
 }
 bool cmp2(int a, int b)   //从小到大排序
 {
     if(a<=b)
        return true;
     else
        return false;
 }
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    printf("%d", arr[i]);
}
  int main()
  {
      int N;
      scanf("%d", &N);
      int MAX,MIN;
      int result;

         while(1)
         {
          int_to_array(N);
          sort(number,number+4,cmp1);
          MAX = array_to_int(number,4);
          print(number,4);
          printf(" - ");
          sort(number,number+4,cmp2);
          MIN = array_to_int(number,4);
          print(number,4);
          result=MAX-MIN;
          int_to_array(result);
          if(result == 0 ||result == 6174)
          {
              printf(" = ");
              print(number,4);
              break;
          }
          else
          {
              printf(" = ");
              print(number,4);
              printf("\n");
              N=result;
          }
        }





      return 0;
  }
