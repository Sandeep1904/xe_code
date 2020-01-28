//
// Created by xesandeep on 2020-01-28.
//

#include <iostream>
using namespace std;

void selection(int arr[], int size){
    int min, temp;
    for (int i=0;i<size-1;i++){
        min = i;
        for (int j =i+1;j<size;j++){
            if (arr[min] > arr[j]){
                min = j;

            }

        }
        temp = arr[min];
        arr[min]= arr[i];
        arr[i] = temp;
    }
    for (int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int arr[] = {5,4,3,2,1};
    int size = 5;

    for (int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selection(arr, size);
    return 0;

}