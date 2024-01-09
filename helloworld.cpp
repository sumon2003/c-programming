/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    
    for(int i=0; i<t; i++)
    {   
        int a, b, c, c1 = 0, c2 = 0;
        cin >> a >> b >> c;

        c1 = a + b;
        c2 = a - b;

        if(c1 == c) cout << "+" << endl;
        else if(c2 == c) cout << "-" << endl;
    }
    
return 0;  
}
