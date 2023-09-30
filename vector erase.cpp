//vector erase
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,x;
    cin>>n;
    vector<int>arr;
    for(i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }   
    int a,b,c;
    cin>>a;
    cin>>b>>c;
    arr.erase(arr.begin()+a-1);
    arr.erase(arr.begin()+b-1, arr.begin()+c-1);
    
    int count=arr.size();
    cout<<count<<endl;
    
    for(i=0;i<count;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

