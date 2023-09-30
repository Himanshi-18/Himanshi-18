//conditional statement
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int input, i;
    string s[10]= {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin>>input;
    if(input<=9)
    {
        cout<<s[input];
    }
    else if(input>9)
        {
            cout<<s[0];
        }
    return 0;
}
