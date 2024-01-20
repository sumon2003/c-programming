/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    vector <char> v;
    for(char c: str)
    {
        if(c >= '0' && c <= '9')
        {
            v.push_back(c);
            if(c == '+')
            {
                continue;
            }
        }
    }

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++)
    {
        cout << v[i];
        if(i < v.size()-1)
        {
            cout << '+';
        }
    }
    cout << endl;


}