// variable size array
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<vector<int> > v; //2d array or vector initialze
    int arrayLength, queries;
    cout<<"array length: ";
    cin >> arrayLength;
    cout<<"queries: "<<endl;
    cin >> queries;
    for (int i = 0; i < arrayLength; i++) {
        int innerArrayLength;
        cout<<"inner array legth: "<<endl;
        cin >> innerArrayLength;
        vector<int> temp; //single array or vector
        for (int j = 0; j < innerArrayLength; j++) {
            int value;
            cout<<"value: "<<endl;
            cin >> value;
            temp.push_back(value);
        }
        v.push_back(temp);
    }
    for (int i = 0; i < queries; i++) {
        int f, s;
        cout<<"enter two number: "<<endl;
        cin >> f;
        cin >> s;
        cout << v[f][s] << endl;
    } 
    return 0;
}
