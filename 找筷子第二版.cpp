#include<stdio.h>
int nums;
int result=0;
int main()
{
    scanf("%d",&nums);
    for(int i=0;i<nums;i++)
    {
        int a;
        scanf("%d",&a);
        result^=a;
    }
    printf("%d",result);
    return 0;
}
