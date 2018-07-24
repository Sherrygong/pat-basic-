#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

bool cmp(int a,int b)
{
    return a>b;
}

int main()
{
    bool table[1010]={0};
    int n,m,a[110];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        m = a[i];
        while(m!=1)
        {
            if(m%2 == 0)
            {
                m = m/2;
            }
            else m =(3*m+1)/2;
            table[m]=true;
        }
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(table[a[i]]==false)
        count++;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
    {
        if(table[a[i]]==false)
        {
            printf("%d",a[i]);
            count--;
            if(count>0)
                printf(" ");
        }

    }
    return 0;
}
