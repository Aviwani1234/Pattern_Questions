#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = (n + (n / 2) + 2) / 2; j >= i; j--)
        {
            cout << " ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << "*";
            cout << " ";
        }

        cout << endl;
    }

    return 0;
}