/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan  //*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        string str;
        cin >> str;

        int len = str.length();

        if(len > 10)
        {
        cout << str[0] << len-2 << str[len-1];
        }
        else 
        {
            cout << str;
        }
        cout << endl;
    }
    
    









}