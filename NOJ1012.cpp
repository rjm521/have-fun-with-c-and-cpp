#include<cstdio>
#include<cstring>
void f(int n,int r)
{
    if(n==0)
    {
        return;
    }
    if(n<0)
    {
        printf("-");
        n=-n;
    }
    f(n/r,r);
    int t=n%r;
    if(t>=10)
    {
        printf("%c",'A'+t-10);
    }
    else
    {
        printf("%d",t);
    }

}


int main()
{

    int t,n,r;
    //freopen("test_in.txt","r",stdin);
   //freopen("test_out.txt","w",stdout);
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d", &n ,&r);
        if(n==0)
        {
            printf("0");
            continue;
        }
        f(n,r);
        printf("\n");
    }
    //fclose(stdin);
   // fclose(stdout);
    return 0;
}
