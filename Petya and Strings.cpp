/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;

    getline(cin, str1);
    getline(cin, str2);

    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    int i = str1.compare(str2);

    if(i > 0) cout << "1" << endl;
    else if(i < 0) cout << "-1" << endl;
    else cout << "0" << endl; 


   
}