//
// Created by xesandeep on 2020-01-14.
//

#include <iostream>

using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i=0,k=1; i<n;i++)
    {
        for (int j=0;j<i ; j++,k++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }

}