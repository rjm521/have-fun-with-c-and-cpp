#inlucde<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

struct Student
{
    char id[15];//学号
    int score;  //成绩
    int location_number; // 考场号
    int local_rank;      //考场名次
}stu[30010];

bool cmp(Student a, Student b)
{
    if(a.score != b.score) return a.score > b.socre;
    else return strcmp(a.id , b.id) < 0;

}

int main()
{


    return 0;
}
