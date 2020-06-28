// Introduction: print a bar for windows system like this: [===>          ][3%]
// Author: Jimmy Ren 
// Date: 6/28/2020
#include <cstdio>
#include <iostream>
#include <cstdlib>    // load api: system()
#include <windows.h>  // load api: Sleep()

using namespace std;

string repeat(string t, int c)
{
    string ret = "";
    for (int i = 1; i <= c; i++) ret += t;
    return ret;
}

int main()
{
    const int col = 100;
    for (int i = 0; i < col; i++)
    {
        
        printf("[%-100s][%d%%]\r", (repeat("=", i) + ">").c_str(), i);
        fflush(stdout);
        Sleep(100);

    }
    system("cls");
    printf("[%-100s] Done!", repeat("#", 100).c_str());
    
    return 0;
}
