#include <iostream>
using namespace std;
//
int main() {
    int a[10];
    //int n;
    for(int i=0;i < 10;++i)
    {
        a[0] = 1;
        a[i + 1] = a[i] + 3;
        cout << a[i]<<"," ;
    }
    int sum =  (a[0] + a[4]) * 5 / 2;
  
    cout << sum << endl;
    cout << sizeof(a) << endl;
    return 0;
}