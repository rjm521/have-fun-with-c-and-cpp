//此垃圾题竟然难受了我AC
#include<iostream>
#include<string>
using namespace std;
string arr[12][2];

int main()
{
arr[0][0]="Windows1.0";
arr[1][0]="Windows2.0";
arr[2][0]="Windows3.0";
arr[3][0]="Windows95";
arr[4][0]="Windows98";
arr[5][0]="Windows2000";
arr[6][0]="WindowsXP";
arr[7][0]="WindowsVista";
arr[8][0]="Windows7";
arr[9][0]="Windows8";
arr[10][0]="Windows8.1";
arr[11][0]="Windows10";

arr[0][1]="1.0";
arr[1][1]="2.0";
arr[2][1]="3.0";
arr[3][1]="4.0";
arr[4][1]="4.1";
arr[5][1]="NT5.0";
arr[6][1]="NT5.2";
arr[7][1]="NT6.0";
arr[8][1]="NT6.1";
arr[9][1]="NT6.2";
arr[10][1]="NT6.3";
arr[11][1]="NT10.0";

    string str;
    while(cin>>str)
    {
        for(int i=0;i<12;i++)
        {
            if(arr[i][0]==str)
            {
                cout<<arr[i][1]<<endl;
                break;
            }

        }
        for(int i=0;i<12;i++)
        {
            if(arr[i][1]==str)
            {
                cout<<arr[i][0]<<endl;
                break;
            }

        }


    }

   return 0;

}
