//////
////// Created by xesandeep on 2020-01-29.
//////
////
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    vector<int> vec;
//
//    for (int i=1;i<=5;i++)
//        vec.push_back(i);
//
//    cout<<"output of the begin and the end: ";
//    for (auto i = vec.begin();i!= vec.end(); i++)
//        cout<<*i<<" ";
//
//    cout<<"\noutput of the cbegin and cend: ";
//    for (auto i =vec.cbegin();i!=vec.cend();i++)
//        cout<<*i<<" ";
//
//    cout<<"\noutput of the rbegin and rend: ";
//    for (auto ir = vec.rbegin();ir!= vec.rend;++ir)
//        cout<<*ir<<" ";
//
//    cout<<"\noutput of the crbegin  and crend: ";
//    for (auto ir = vec.crbegin ; ir!= vec.crend ; ++ir)
//        cout<<*ir<<" ";
//
//    return 0;
//}
//
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
    return 0;
}