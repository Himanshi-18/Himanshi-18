//map-STL
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int q;
    cin>>q;
    map<string, int>m;
    for(int i=0; i<q; i++)
    {
        int x,z;
        string s;
        cin>>x>>s;
        switch(x)
        {
            case 1:
            {
                cin>>z;
                m[s]+=z;
            }   
            break;
            case 2:
                m.erase(s);
            break;
            case 3:
            if(m.find(s) != m.end())
            {
                cout<<m[s]<<endl;
            }
            else {
                cout<<"0"<<endl;
            }
 
        }
    }
      
    return 0;
}
