/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan  //*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    
    for(char &c: str)
    {
        if(c >= 'A' && c <= 'Z'){
            c = tolower(c);
        }
        else if(c >= 'a' && c <= 'z'){
            c = toupper(c);
        }
        else if(c == ',')
        {
            c = ' ';
        }
    }
    cout << str << endl;
        
        



}