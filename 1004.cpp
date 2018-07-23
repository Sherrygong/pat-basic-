#include <stdio.h>
#include <iostream>
using namespace std;

struct student
{
    char name[11];
    char num[11];
    int grade;
}stu,a_min,a_max;

int main()
{
    int n;
    scanf("%d",&n);
    a_min.grade = 101;
    a_max.grade = -1;
    for(int i=0;i<n;i++)
    {
        scanf("%s%s%d",stu.name,stu.num,&stu.grade);
        if(stu.grade < a_min.grade)
            a_min = stu;
        if(stu.grade > a_max.grade)
            a_max = stu;
    }
    printf("%s %s\n",a_max.name,a_max.num);
    printf("%s %s\n",a_min.name,a_min.num);
    return 0;
}
