#include<stdio.h>

/*  Find two numbers which only appear once in an array
    Input: data - an array contains two number appearing exactly once,
                  which others appearing exactly twice
           length - the length of data
    Output: num1 - the first number appearing once in data
            num2 - the second number appearing once in data
*/
unsigned int FindFirstBitIS1(int num) // 找到一个数字第一个为1的比特位并返回该位置
{
    int indexBit=0;
    while(((num&1)== 0) && (indexBit < 32))
    {
        num = num >> 1;
        indexBit++;
    }
    return indexBit;
}

bool IsBit1(int num, unsigned int indexBit)  //判断一个数字的第indexBit位是否为1
{
    num = num >> indexBit;
    return (num & 1);
}

void Find_single(int arr[], int n, int &a, int &b)  //返回是单身的数字
{
    unsigned int i,Index;
    int result=0;
    for(i=0;i<n;i++)
    {
        result^=arr[i];
    }
    Index = FindFirstBitIS1(result);
    for(i=0;i<n;i++ )
    {
        if(IsBit1(arr[i],Index))
        {
            a^=arr[i];
        }
        else
        {
            b^=arr[i];
        }

    }
    return ;
}
int main()
{
    int a=0,b=0;
    int arr[]={1,3,5,7,9,4,1,3,5,7,9,6};
    int size=12;
    Find_single(arr, size,a,b);
    printf("%d %d",a,b);

    return 0;
}
