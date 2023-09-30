//pointer
#include <iostream>
#include <cstdio>
using namespace std;

void update(int *a,int *b) {
    // Complete this function  
    int sum = *a + *b;
    int mult;
    if(*a > *b)
    {
         mult = *a - *b;
    }  
    else
    {
        mult = *b - *a;
    }
     *a = sum;
   *b = mult;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin >> a >> b;
    update(pa, pb);
    cout<< a<<endl<< b;

    return 0;
}
