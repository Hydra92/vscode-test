#include <iostream>
//#include "stdio.h"
using namespace std;
int fun(char str[ ])
{
    int n = 0, num = 0;
    while (str[n] != '\0')
    {
        if (str[n] >= 'A' && str[n] <= 'Z' ||
            str[n] >= 'a' && str[n] <= 'z')
            num++;
        n++;
    }
    return num;
}
int main( )
{
    cout << fun( "123 abc ABC" ) << endl;
    return 0;
}