#include <iostream>

using namespace std;
int hashtable[50]={0};
int a[50]={0};
int main()
{
    int n;
    cin >> n;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int num;
        int ans=0;
        cin >> num;
        while(num>0)
        {
            ans+=num%10;
            num/=10;
        }
        hashtable[ans]++;

    }
    for(int i=0;i<50;i++)
    {
        if(hashtable[i]>0)
            a[cnt++]=i;
    }
    cout << cnt << endl;
    for(int i=0;i<cnt;i++)
    {
        if(i!=cnt-1)
        cout << a[i] << ' ' ;
        else cout << a[i] << endl;
    }
    return 0;
}
