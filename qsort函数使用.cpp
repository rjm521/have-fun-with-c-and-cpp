#include<stdio.h>
#include<stdlib.h>
/*
    程序功能：调用qsort库函数，将一个unsign int 数组
    按照个位数从小到大进行排序。
    Date: 2019-3-31

*/
int MyCompare(const void * elem1, const void * elem2)
{

    unsigned int *p1, *p2;
    p1 = (unsigned int *)elem1;
    p2 = (unsigned int *)elem2;

    return (*p1 % 10)-(*p2 % 10);
}

#define NUM 5

int main()
{
    unsigned int an[NUM]={8,123,11,10,4};
    qsort(an,NUM,sizeof(unsigned int),MyCompare);
    for (int i=0;i<NUM ;i++ )
        printf("%d ",an[i]);
    return 0;
}
