#include<stdio.h>
const int maxn = 1000001;
int prime[maxn], pNum = 0;   //����������� pNum��ʾ�ڼ�������
bool p[maxn] = {0};          // O��ʾ���������෴��ʾ��������
void Find_Prime(int n)
{
    for (int i=2;i<maxn ;i++ )
    {
        if(p[i]==false)       //���������
            prime[pNum++]=i;
            if(pNum>=n) break;  //�������
        for (int j=i+i; j<maxn;j+=i )
            p[j]=true;        //�����������ı������ų�
    }

}

int main()
{

    int m,n,j=0;
    scanf("%d%d",&m ,&n);
    Find_Prime(n);
    for(int i=m; i<=n; i++)
    {
        printf("%d",prime[i-1]);
        j++;
        if( j%10 !=0 && i<n) printf(" ");
        else printf("\n");


    }
    return 0;
}
