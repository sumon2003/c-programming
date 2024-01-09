/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    
    int n;
    
    for(int i=0; i<t; i++)
    {
        cin >> n;
        if(n<=10)
        cout << "0" << " " << n << endl;
        else{
            cout << n-10 <<" " << "10" << endl;
        }
    }
    
return 0;  
}
