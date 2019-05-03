#include<cstdio>
#include<algorithm>

using namespace std;
struct MoonCake
{
    double num;
    double price;
    double single_price;


}mooncake[10001];

bool cmp(MoonCake a, MoonCake b)
{

    return a.single_price > b.single_price;

}


int main()
{
    int n,d;
    double sum=0;
    scanf("%d%d", &n, &d);
    for (int i=0;i<n ;i++ )
        scanf("%lf", &mooncake[i].num);
    for(int i=0; i<n; i++)
        {   scanf("%lf", &mooncake[i].price);
            mooncake[i].single_price = mooncake[i].price/mooncake[i].num;
        }
        sort(mooncake,mooncake+n,cmp);
//        for(int i=0;i<n;i++)
//        {
//            printf("%f %f\n",mooncake[i].num, mooncake[i].price);
//        }

        for(int i=0;i<n; i++)
        {


                if(d>mooncake[i].num)
                {
                    sum+=mooncake[i].price;
                    d-=mooncake[i].num;

                }
                else if(d == mooncake[i].num)
                {
                    sum+=mooncake[i].price;
                    d=0;
                    break;
                }
                else
                {
                    sum+=d*mooncake[i].single_price;
                    d=0;
                    break;
                }



        }
    printf("%.2f",sum);

    return 0;
}
