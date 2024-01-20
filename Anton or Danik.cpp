/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin >> n;

    string str;
    cin >> str;
    
    int cnt_A = 0, cnt_D = 0;
    for(char c : str)
    {
        if(c == 'A') cnt_A++;
        if(c == 'D') cnt_D++;
    }

    if(cnt_A > cnt_D) cout << "Anton" << endl;
    else if(cnt_A < cnt_D) cout << "Danik" << endl;
    else cout << "Friendship" <<endl;





}