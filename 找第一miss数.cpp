#include<stdio.h>
/*
   Question: ������С��N�����飬�������Ԫ�ػ��಻����.
             Ԫ�صĴ�С��Χ��1����N+1��.
             Ŀ�����ҳ���һ��miss����.
             Ҫ��ʱ�临�Ӷ�O(N)���ռ���O(1).
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
