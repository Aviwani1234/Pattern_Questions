#include <bits/stdc++.h>
using namespace std;
 
int main(){

for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        if(i==0 || i==4)
        {
            cout<<"*";
        }
        else if((i!=0 && i!=4 && j==0) || (i!=0 && i!=4 && j==4))
        {
            cout<<"*";
        }
        else
        {
            cout<<" ";
        }
        cout<<" ";
    }
    cout<<endl;
}
return 0;
}