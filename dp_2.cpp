#include<stdio.h>

int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int Return_opt(int arr[],int n)
{
    int a,b;
    int opt[n]={};
    opt[0]=arr[0];
    opt[1]=max(arr[0],arr[1]);
    for(int i=2;i<n;i++)
    {
        a=opt[i-2]+arr[i];
        b=opt[i-1];
        opt[i]=max(a,b);

    }
    return opt[n-1];

}
int main()
{
    int arr[]={1,2,4,1,7,8,3};
    int size=7;
    int m=Return_opt(arr,size);
    printf("%d\n",m);
    m=Return_opt(arr,2);
    printf("%d\n",m);
    m=Return_opt(arr,3);
    printf("%d\n",m);
    m=Return_opt(arr,4);
    printf("%d\n",m);
    m=Return_opt(arr,5);
    printf("%d\n",m);
    m=Return_opt(arr,6);
    printf("%d\n",m);
    return 0;
}
