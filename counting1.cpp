//
// Created by xesandeep on 2020-02-04.
// this is a solution of a problem on HackerRank
// its output path is not configured, it wont show output, hange it if you want to see it.

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the countingSort function below.
vector<int> countingSort(vector<int> arr) {
    int i = arr.size();
    int l=arr[0];
    for (int m=0;m<i;m++){
        if (l<arr[m])
            l=arr[m];
    }

    vector<int> xe(l+1);
    for (int j=0;j<i;j++){
        int k = arr[j];
        xe[k] += 1;

    }
    return xe;




//    vector<int> xes(i);
//    int p=0;
//    for (int a=0;a<xe.size();a++){
//        for (int b=0;b<xe[a];b++){
//            if (xe[a]>0){
//                xes[p]=a;
//                p++;
//            }
//            else continue;
//        }
//
//
//    }
//    return xes;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    vector<int> result = countingSort(arr);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
