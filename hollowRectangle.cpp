#include <bits/stdc++.h>
using namespace std;

int main()
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i == 0 || i == 2)
            {
                cout << "*";
            }
            else if ((i != 0 && j == 0) || (i != 2 && j == 5))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}