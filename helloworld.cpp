/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    scanf("%d", &n);
    
    int sum = 0;
    while(n > 0)
    {
        sum = sum + (n % 10);
        n = n/10;
    }

    printf("%d",sum);
    

return 0;  
}
