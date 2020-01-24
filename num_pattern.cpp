#include <iostream>

using namespace std;
int main()
{
    cout<<"please enter a number";
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


    return 0;
}
