//
// Created by xesandeep on 2020-01-20.
//
#include <iostream>
using namespace std;

int main () {
    cout << "enter a number: ";
    int n ;
    cin>>n;
    for (int i=1;i<=n;i++) {
        int k=0;
        while (k<(i-1)) {
            cout<<" ";
            k++;
        }
        for (int j=0;j<(2*i-1);j++){
            if (j%2!=0)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}