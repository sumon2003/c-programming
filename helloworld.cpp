/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b, c, r1, r2, r3, r4, r5;
    cin >> a;
    cin >> b;
    cin >> c;

    r1 = a + b * c;
    r2 = a * (b + c);
    r3 = a * b * c;
    r4 = (a + b) * c;
    r5 = a + b + c;

     int maxResult = max({r1, r2, r3, r4, r5});
     cout << maxResult;
    
    /*if (r1 > r2 && r1 > r3 && r1 > r4 && r1 > r5) cout << r1;
    else if (r2 > r1 && r2 > r3 && r2 > r4 && r2 > r5) cout << r2;
    else if (r3 > r1 && r3 > r2 && r3 > r4 && r3 > r5) cout << r3;
    else if (r4 > r1 && r4 > r2 && r4 > r3 && r4 > r5) cout << r4;
    else cout << r5;*/

    
return 0;  
}

/*
int t;
    cin >> t;
    
    for(int i=0; i<t; i++)
    {   
        int n;
        cin >> n;

        char str[n];
        cin >> str;
        
        for(int i=0; i<n; i++)
        {
            if((str[i] == 0) && (str[i+1] == 0)) cout << "A";
            else if((str[i] == 0) && (str[i+1] == 1)) cout << "T";
            else if((str[i] == 1) && (str[i+1] == 0)) cout << "C";
            else if((str[i] == 1) && (str[i+1] == 1)) cout << "G";
        }
    }
*/