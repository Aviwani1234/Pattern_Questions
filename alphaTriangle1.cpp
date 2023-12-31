#include <bits/stdc++.h>
using namespace std;
//  DEFG
//  CDEF
//  BCDE
//  ABCD

//  A
//  B C
//  C D E
//  D E F G

 
int main(){

    int n;
    cin >> n;

    char ch = 'A';

    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
      //  ch=ch-i;
        cout << endl;
    }
 
return 0;
}