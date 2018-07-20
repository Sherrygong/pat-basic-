#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,d;
    cin >> n;
    double e;
    cin >> e;
    cin >> d;
    int knkz=0,kz=0;
    for(int i=0;i<n;i++)
    {
        int k;
        cin >> k;
        int cnt=0;
        for(int j=0;j<k;j++)
        {
            double dl;
            cin >> dl;
            if(dl<e)
                cnt++;
        }
        if(k<=d&&cnt>k/2)
        {
            knkz++;
        }
        if(k>d&&cnt>k/2)
        {
            kz++;
        }
    }
    printf("%.1f%% ",100.0*knkz/n);
    printf("%.1f%%\n",100.0*kz/n);
    return 0;
}
