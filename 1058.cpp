#include <iostream>
#include <cstring>
using namespace std;

struct TI
{
    int manfen;
    int xuanxiang;
    int truexx;
    char truen[10]={0};
}ti[102];

int main()
{
    int n,m;
    int grade[1010]={0};
    int cishu[102]={0};
    cin >> n >> m;
    for(int i=0;i<m;i++)
    {
        cin >> ti[i].manfen >> ti[i].xuanxiang >> ti[i].truexx;
        for(int j=0;j<ti[i].truexx;j++)
        {
            cin >> ti[i].truen[j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            char c,tmp[10]={0};
            int xxnum;
            cin >> c >> xxnum;
            for(int k=0;k<xxnum;k++)
            {
                cin >> tmp[k];
            }
            cin >> c;
            if(!strcmp(tmp,ti[j].truen))
            {
                grade[i]+=ti[j].manfen;
            }
            else
            {
                cishu[j]++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout << grade[i] << endl;
    }
    int maxm=0;
    for(int i=0;i<m;i++)
    {
        if(maxm<cishu[i])
            maxm=cishu[i];
    }
    if(maxm==0)
    {
        cout << "Too simple" <<endl;
        return 0;
    }
    cout << maxm ;
    for(int i=0;i<m;i++)
    {
        if(maxm==cishu[i])
            cout << ' ' << i+1;
    }
    return 0;
}
