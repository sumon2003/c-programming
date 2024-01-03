#include <bits/stdc++.h>
using namespace std;

int main(){

int n;
cout << "Enter array Size: ";
cin >> n;

int arr[n];
cout << "Enter the array: ";
for(int i=0; i<n; i++){
    cin >> arr[i];
}

cout << "Before update: ";
for(int i=0; i<n; i++){
    cout << arr[i] << " ";
}

int value, update_index;
cout << endl << "Enter Value and Update index: ";
cin >> value >> update_index;

arr[update_index] = value;
 
cout << "After Update: ";
for(int i=0; i<n; i++){
    cout << arr[i] << " ";
} 

return 0;  
}
