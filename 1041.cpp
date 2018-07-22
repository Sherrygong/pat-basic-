#include <iostream>
#include <cstring>
using namespace std;

struct student
{
    char num[16];
    int shizuo;
    int kaohao;
}stu[1010];

int main()
{
    int n,m;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        char num[16];
        int shizuo;
        cin >> num;
        cin >> shizuo;
        cin >> stu[shizuo].kaohao;
        strcpy(stu[shizuo].num , num);
        stu[shizuo].shizuo = shizuo;
    }
    cin >> m;
    for(int i=0;i<m;i++)
    {
        int chaxun;
        cin >> chaxun;
        cout << stu[chaxun].num;
        cout << ' ';
        cout << stu[chaxun].kaohao;
        cout << endl;
    }
//cout << "Hello world!" << endl;
    return 0;
}
