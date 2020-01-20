//
// Created by xesandeep on 2020-01-20.
//
#include <iostream>
using namespace std;

int main () {


    cout << "enter a number: ";
    int n ;
    cin>>n;
    cout<<"The horizontal pattern!"<<endl;
    for (int i=1;i<=n;i++) {
        int k=0;
        while (k<(n-i)) {
            cout<<" ";
            k++;
        }
        for (int j=1;j<=(2*i)-1;j++){
            if (j%2==0)
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"The vertical pattern!"<<endl;

    for (int i=1;i<=n;i++){
        int k=0;
        while(k!=(n-i)){
            cout<<" ";
            k++;
        }
        for (int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;

    }
    for (int i=1;i<=n;i++) {
        int k=0;
        while (k!=i) {
            cout<<" ";
            k++;
        }
        for (int j=1;j<(n-i)+1;j++) {
            cout<<"*";
        }
        cout<<endl;

    }
    cout<< "But both are different :)"<<endl;
}


