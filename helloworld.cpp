/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    
    int x, y, z;

    int max_choklate = 0;
    for(int i=0; i<n; i++)
    {
        cin >> x >> y >> z;
        max_choklate = ((x * 5) + (y * 10)) / z;
        cout << max_choklate << endl;
    }
    
   
   

    


return 0;  
}
