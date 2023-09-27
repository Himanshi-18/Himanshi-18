//set-STl
#include<iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int> s;
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        int y, x;
        cin >> y >> x;
        switch (y) {
            case 1:
                s.insert(x);
                break;
            case 2:
                s.erase(x);
                break;
            case 3:
            set<int>::iterator itr;
                itr=s.find(x);
                if (itr!=s.end()) {
                    cout << "Yes" << endl;
                }
                else {
                    cout << "No" << endl;
                }
                break;
        }
    }
    return 0;
}
