#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str(100010,0);
    getline(cin,str);
    int sum=0;
    int len1=str.length();
    for(int i=0;i<len1;i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            sum+=str[i]-'a'+1;
        }
        else if(str[i]>='A'&&str[i]<='Z')
        {
            sum+=str[i]-'A'+1;
        }
    }
    int cnt1=0,cnt2=0;
    while(sum!=0)
    {
        if(sum%2==0)
            cnt1++;
        else    cnt2++;
        sum = sum/2;
    }
    cout << cnt1 << ' ' << cnt2 << endl;
    return 0;
}
