/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan  //*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        string str;
        cin >> str;

        if(str.length() == 2)
        {
            cout << "Bad" << endl;
            
        }
        else{
           for(int j=0; j<str.length()-2; j++)
           {
               if(str[j] == '0' && str[j+1] == '1' && str[j+2] == '0')
               {
                   cout << "Good" << endl;
                   break;
               }
               else if(str[j] == '1' && str[j+1] == '0' && str[j+2] == '1')
               {
                   cout << "Good" << endl;
                   break;
               }
               else
               {
                   cout << "Bad" << endl;
                   break;
               }
           }
        }    
    }



   return 0;
}