#include <bits/stdc++.h>
using namespace std;

int main(){

int t,n;
cin>>t;
int max=0,min=0;
for(int i=0; i<t; i++){
    cin>>n;
    if(n%2==0){
        max = n;
        min = n/2;
    }else{
        max = n;
        min = (n/2)+1;
    }
    cout<<min<<" "<<max<<endl;
}



max = 0;
min = 0;

return 0;  
}
