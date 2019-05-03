#include<stdio.h>
/*
   Question: 给定大小是N的数组，数组里的元素互相不反复.
             元素的大小范围是1～（N+1）.
             目标是找出第一个miss的数.
             要求时间复杂度O(N)。空间是O(1).
*/
int Find_miss(int arr[], int length)
{
    int result=0;
    if(length==0)
    {
        return 1;
    }
    for(int i=0;i<length;i++)
    {
        result^=(i+1);
        result^=arr[i];
    }
    result^=(length+1);
    return result;
}
int main()
{
    int arr[9]={1,2,3,5,6,7,8,9,10};
    int b=Find_miss(arr, 9);
    printf("%d\n",b);

    return 0;
}
