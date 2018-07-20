#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

const int maxn=10002;
int matrix[maxn][110],a[maxn];  //内存超限

bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int N;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> a[i];
    }
    if(N==1)
    {
        cout << a[0];
        return 0;
    }
    sort(a,a+N,cmp);
    int m=(int)ceil(sqrt(1.0*N));   //行数最小为m,ceil为大于等于它的最小整数。
    while(N%m!=0)
    {
        m++;
    }
    int n=N/m,i=1,j=1,now=0;
    int u=1,d=m,l=1,r=n;
    while(now<N)
    {
        while(now<N&&j<r)
        {
            matrix[i][j++]=a[now++];
        }
        while(now<N&&i<d)
        {
            matrix[i++][j]=a[now++];
        }
        while(now<N&&j>l)
        {
            matrix[i][j--]=a[now++];
        }
        while(now<N&&i>u)
        {
            matrix[i--][j]=a[now++];
        }
        u++;
        d--;
        l++;
        r--;
        i++;
        j++;
        if(now==N-1)
            matrix[i][j]=a[now++];
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j!=n)
            cout << matrix[i][j] << ' ';
            else cout << matrix[i][j] << endl;
        }
    }
    return 0;
}
