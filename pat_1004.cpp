#include<iostream>
#include<algorithm>
#include<string.h>

/*
  读入 n（>0）名学生的姓名、学号、成绩.
  分别输出成绩最高和成绩最低学生的姓名和学号。
*/
using namespace std;
struct student
{
    char name[11];
    char number[11];
    int score;
};

int main()
{
    int nums,i;
    cin>>nums;
    struct student stu[nums];
    for( i=0;i<nums;i++)
    {
        cin>>stu[i].name;
        cin>>stu[i].number;
        cin>>stu[i].score;

    }
    int j=0,k=nums-1;
    for(i=0;i<nums;i++)
    {
        if(stu[i].score>stu[j].score)
        {
            j=i;
        }
        if(stu[i].score<stu[k].score)
        {
            k=i;
        }

    }
    cout<<stu[j].name<<" "<<stu[j].number<<endl;
    cout<<stu[k].name<<" "<<stu[k].number;

    return 0;
}
