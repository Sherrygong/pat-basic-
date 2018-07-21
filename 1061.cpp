#include <iostream>

using namespace std;

int main()
{
    int n,len;

    cin >> n >> len;
    int fenzhi[len+2]={0},trueans[len+2]={0};
    for(int i=0;i<len;i++)
    {
        cin >> fenzhi[i];
    }
    for(int i=0;i<len;i++)
    {
        cin >> trueans[i];
    }
    for(int i=0;i<n;i++)
    {
        int score=0;
        int ans[len+2]={0};
        for(int j=0;j<len;j++)
        {
            cin >> ans[j];
            if(ans[j]==trueans[j])
            {
                score+=fenzhi[j];
            }
        }
        cout << score <<endl;
    }
    return 0;
}
