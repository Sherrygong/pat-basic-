#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int isprime(int n)
{
    int flag=1;
    if(n==1||n==0) return 0;
    for(int i=2;i<=(int)sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main()
{
    int n;
    int a[10100]={0};
    int b[10100]={0};
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        int id;
        cin >> id;
        a[id]=i;
    }
    int k;
    cin >> k;
    for(int i=0;i<k;i++)
    {
        int chaxun;
        cin >> chaxun;
        if(b[chaxun]==0)
        {
            if(a[chaxun]==1)
            {
                cout << setw(4) << setfill('0') << chaxun << ": Mystery Award" << endl;
                b[chaxun]=1;
            }
            else if(isprime(a[chaxun]))
            {
                cout << setw(4) << setfill('0') << chaxun << ": Minion" << endl;
                b[chaxun]=1;
            }
            else if(a[chaxun]==0)
            {
                cout << setw(4) << setfill('0') << chaxun << ": Are you kidding?" << endl;
            }
            else
            {
                cout << setw(4) << setfill('0') << chaxun << ": Chocolate" << endl;
                b[chaxun]=1;
            }
        }
        else
            cout << setw(4) << setfill('0') << chaxun << ": Checked" << endl;

    }
    return 0;
}
