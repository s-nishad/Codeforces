// created on 10/13/2021
// 71A Way Too long

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int input;
   cin >> input;

   string word;
   int i, len;
   for(i = 0; i < input; i++){
        cin >> word;
        len = word.length();

        if(len > 10)
            cout << word[0] << len-2 << word[len-1] << endl;
        else
            cout << word << endl;
   }
   return 0;
}
