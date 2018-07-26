#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int n,m,s;
    cin >> n >> m >> s;
    int cnt=0;
    char zhongjiang[1010][25]={0};
    if(s>n)
    {
        for(int i=1;i<=n;i++)
        {
            char name[25]={0};
            cin >> name;
        }
        cout << "Keep going..." << endl;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            char name[25]={0};
            cin >> name;
            if(i<s) continue;
            else if(i==s) 
            {
                cout << name <<endl;
                strcpy(zhongjiang[cnt++],name);
            }
            else{
                if(i<s+m) continue;
                else{
                if(((i-s)%m==0))
                {
                    int j;
                    for(j=0;j<cnt;j++)
                    {
                        if(!strcmp(zhongjiang[j],name))
                        {
                            s++;
                            break;
                        }
                    }
                    if(j==cnt)
                    {
                        strcpy(zhongjiang[cnt++],name);
                        cout << name << endl;
                    }
                }   }
            }
        }
    }
    return 0;
}
