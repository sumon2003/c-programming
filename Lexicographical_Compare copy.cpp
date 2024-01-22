/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

    string str1, str2;

    getline(cin, str1);
    getline(cin, str2);

    if(lexicographical_compare(str1.begin(),str1.end(), str2.begin(), str2.end())) 
      cout << str1 << endl;
    else if(lexicographical_compare(str2.begin(),str2.end(), str1.begin(), str1.end()))
      cout << str2 << endl;
    else 
      cout << str1 << endl;    


    return 0;
}