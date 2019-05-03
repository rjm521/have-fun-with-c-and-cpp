#include<iostream>
#include<stack>
#include<string>
#include<stdio.h>
using namespace std;

int main()
{
    char c;
    stack<string> s;
    string str;
    while(cin>>str)
    {
        s.push(str);
        if((c=getchar())=='\n')
            break;
    }
    cout<<s.top();
    s.pop();
    while(!s.empty())
    {
        cout<<" "<<s.top();
        s.pop();
    }
    return 0;
}
