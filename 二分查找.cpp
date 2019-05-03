#include<cstdio>
#include<algorithm>
using namespace std;
/**
  * This is a documentation comment block
  * @param xxx does this (this is the documentation keyword)
  * @authr some user (this is the documentation keyword error)
  */
 /* int BinarySearch(int arr[],int left , int right, int x)  //递归形式的二分查找
  {
      if(left > right)
        return -1;

      int  mid = (left + right)/2;
      if(arr[mid] == x)
        return mid;
      else if(arr[mid] < x)
        BinarySearch(arr,mid+1,right,x);
      else
        BinarySearch(arr,left,mid-1,x);




  }*/

 int BinarySearch(int arr[], int left, int right, int x)   //二分查找的非递归实现
 {
     int  mid = (left + right)/2;
     while(left<=right)
     {
         if(arr[mid] == x)
            return mid;
         else if(arr[mid] < x)
         {
             left= mid+1;
             mid = (left + right)/2;
         }
         else
         {
             right = mid-1;
             mid = (left + right)/2;
         }

     }
     return -1;
 }

  int main()
  {
      int arr[]  = {5,8,4,3,6,9,1,7,2};
      int length = 9;
      sort(arr,arr+length);
      for (int i=0; i<length; i++ )
          printf("%d ", arr[i]);
      printf("\n%d %d",BinarySearch(arr,0,8,10), BinarySearch(arr,0,8,4));
      return 0;
  }
