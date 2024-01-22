/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan  //*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

  string str;

  getline(cin, str);

  int len = str.length();
  
  int sum = 0;
  for(int i=0; i<len; i++)
  {
    sum += str[i] - '0';     
  }

  cout << sum << endl;


  return 0;
}