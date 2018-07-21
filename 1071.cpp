#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int bgn,n;
    cin >> bgn >> n;
    int total=bgn;
    for(int i=0;i<n;i++)
    {
        int n1,n2,battle,xiazhu;
        cin >> n1 >> battle >> xiazhu >> n2;
        if(xiazhu > total)
        {
            cout << "Not enough tokens.  Total = " << total << '.' << endl;
        }
        else
        {
            if((n1>n2&&battle==0)||(n1<n2&&battle==1))
            {
                total+=xiazhu;
                cout << "Win " <<  xiazhu << "!  Total = " << total << '.' << endl;
            }
            else
            {
                total-=xiazhu;
                cout << "Lose " <<  xiazhu << ".  Total = " << total << '.' << endl;
            }
        }
        if(total==0)
        {
            cout << "Game Over." << endl;
            break;
        }
    }
    system("pause");
    return 0;
}
