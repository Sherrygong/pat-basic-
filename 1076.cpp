#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    cin >> n;
    getchar();
    for(int i=0;i<n;i++)
    {
        string str(20,0);

        getline(cin,str);
        int len = str.length();
        for(int i=0;i<len;i++)
        {
            if(str[i]=='T')
                cout << str[i-2]-'A'+1;
        }
    }
    cout << endl;
    return 0;
}
