#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;
    int a,b;
    cin >> a >> b;
    int x;
    cin >> x;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int y;
            scanf("%d",&y);
            if(j!=n-1)
            {
                if(y>=a&&y<=b)
                {
                    printf("%03d ",x);
                }
                else printf("%03d ",y);
            }
            else
            {
                if(y>=a&&y<=b)
                {
                    printf("%03d",x);
                }
                else printf("%03d",y);
            }

        }
        printf("\n");
    }
    return 0;
}
