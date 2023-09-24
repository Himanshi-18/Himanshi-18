//structure
#include<iostream>
#include<string>
using namespace std;

int main()
{
    struct{
        int age;
        string first_name;
        string last_name;
        int standard;
    } myStructure;
    
    cin >> myStructure.age;
    cin >> myStructure.first_name;
    cin >> myStructure.last_name;
    cin >> myStructure.standard;
    cout<<myStructure.age<<" "<<myStructure.first_name<<" "<<myStructure.last_name<<" "<<myStructure.standard;
    return 0;
}
