
//// C++ program to illustrate the
//// iterators in vector
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> g1;

    for (int i = 1; i <= 5; i++)
        g1.push_back(i);

    cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";

    cout << "\nOutput of cbegin and cend: ";
    for (auto i = g1.cbegin(); i != g1.cend(); ++i)
        cout << *i << " ";

    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << " ";

    cout << "\nOutput of crbegin and crend : ";
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
        cout << *ir << " ";
    cout<<endl;

    cout<<"size: "<<g1.size();
    cout<<"\ncapacity: "<<g1.capacity();
    cout<<"\nmax_size: "<<g1.max_size();
    cout<<endl;

    g1.resize(4);

    cout<<"size: "<<g1.size()<<endl;
    if (g1.empty() == false)
        cout<<"vector is not empty"<<endl;
    else
        cout<<"vector is empty"<<endl;

    g1.shrink_to_fit();
    cout<<"vector elements are: "<<endl;
    for (auto it = g1.begin(); it != g1.end(); it++)
        cout<<*it<<" ";
    cout<<endl;

    cout<<"reference operator [g]: g1[2] = "<<g1[2]<<endl;
    cout<<"at: g1.at(3) = "<<g1.at(3)<<endl;
    cout<<"front(): g1.front() = "<<g1.front()<<endl;
    cout<<"back(): g1.back() = "<<g1.back()<<endl;

    int* pos = g1.data();
    cout<<"the first element is "<<*pos<<endl;


    return 0;
}