//class
#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class myClass {
    public:
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    myClass student;
    
    cin >> student.age;
    cin>> student.first_name;
    cin>> student.last_name;
    cin>> student.standard;
    
    cout << student.age << endl;
    cout << student.last_name << ", " << student.first_name << endl;
    cout << student.standard << endl;
    cout << endl;
    cout << student.age <<","<< student.first_name<<","<< student.last_name << "," << student.standard ;
    
    return 0;
}
