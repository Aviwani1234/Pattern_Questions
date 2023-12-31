#include <bits/stdc++.h>
using namespace std;

int main()
{

    for (int i = 5; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
        {
            if (i == 5)
            {
                cout << "*";
            }
            else if (j == 0 || j == i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}