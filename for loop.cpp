//for loop
#include <iostream>
#include <cstdio>
#include<cmath>
#include<algorithm>
#include <vector>
using namespace std;

int main() {
    // Complete the code.
    int a, b,i;
    string s[10]= {" ", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin>>a;
    cin>>b;
    for(i=a;i<=b;i++)
    {
        if(i<=9)
        {
           cout<<s[i]<<endl;
        }
        else 
        {
            if(i % 2 == 0)
            cout<<"even"<<endl;
            else
             cout<<"odd"<<endl;
        }
    }
    return 0;
}

//#include <iostream>
//#include <cstdio>
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int a,b;
//    string c[]={"","one","two","three","four","five","six","seven","eight","nine"};
//    cin>>a>>b;
//    for(int i=a;i<=b;i++)
//        cout<<((i<=9)?c[i]:((i%2==0)?"even":"odd"))<<endl;
//}
