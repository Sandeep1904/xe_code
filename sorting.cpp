//
// Created by xesandeep on 2020-01-28.
//

#include <iostream>
using namespace std;
// this is for selection sort algorithm.
void selection(int arr[], int size){
    int min, temp;
    cout<<"this is done by selection sort"<<endl;
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

// this is for bubble sort algorithm.

void bubble(int arr[], int size){
    int temp;
    cout<<"this is done by bubble sort"<<endl;
    for (int i = 0 ;i<size-1;i++){
        for (int j = 0 ;j<size-i-1;j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }


    }
    for (int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int arr[] = {5,4,3,2,1};
    int ar[] = {2,4,5,1,7};
    int size = 5;
    cout<<"the original array for selection sort"<<endl;
    for (int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"the original array for bubble sort"<<endl;
    for (int j =0;j<size;j++){
        cout<<ar[j]<<" ";
    }
    cout<<endl;
    selection(arr, size);
    bubble(arr,size);
    return 0;

}