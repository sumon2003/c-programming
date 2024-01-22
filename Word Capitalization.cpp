/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    if(str[0] >= 'a' && str[0] <='z')
    {
        transform(str.begin(), str.begin()+1, str.begin(), ::toupper);
        cout << str << endl;
    }
    else cout << str << endl;
}