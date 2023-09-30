//lower bound STL
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q,i,a,x;
    vector<int>v;
    cin>>n; 
      for(i=0;i<n;i++)
      {
          cin>>x;
          v.push_back(x);
      }
      cin>>q;
      for(i=0;i<q;i++)
      {
          cin>>a;
          auto low = lower_bound(v.begin(),v.end(),a);
          if(v[low-v.begin()]==a){
              cout<<"Yes " <<  low-v.begin()+1 << '\n';
          }
          else cout << "No " <<  low-v.begin()+1 << '\n';
      }
    return 0;
}
