#include<cstdio>
typedef struct matrix
{
    int element[2][2];
}matrix;

matrix Mul(matrix A, matrix B)
{
    matrix R;
    R.element[0][0]=(A.element[0][0]*B.element[0][0]+A.element[0][1]*B.element[1][0])%10000;
    R.element[0][1]=(A.element[0][0]*B.element[0][1]+A.element[0][1]*B.element[1][1])%10000;
    R.element[1][0]=(A.element[1][0]*B.element[0][0]+A.element[1][1]*B.element[1][0])%10000;
    R.element[1][1]=(A.element[1][0]*B.element[0][1]+A.element[1][1]*B.element[1][1])%10000;
    return R;
}

int result(int n)
{

    matrix res;
    matrix ans;
    res.element[0][0]=1;   //res 刚开始为单位阵
    res.element[0][1]=0;
    res.element[1][0]=0;
    res.element[1][1]=1;
    ans.element[0][0]=1;
    ans.element[0][1]=1;
    ans.element[1][0]=1;
    ans.element[1][1]=0;
    while(n > 0)
    {
        if(n&1)
        {
            res=Mul(res,ans);
        }
        ans=Mul(ans,ans);       //下一位的基数
        n=n>>1;

    }
    return res.element[0][1];
}
int main()
{
    int n;
    while(1)
    {
     scanf("%d",&n);
     if(n == -1)
        break;
     printf("%d\n",result(n));

    }


}
