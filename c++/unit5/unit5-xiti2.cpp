#include <iostream>
using namespace std;

 int Area(int &a,int &b);

int main(){
    cout<<"输入长方形的长与宽"<<endl;
    int x,y;
    cin >> x >> y ;
    //Area(x,y);
    cout<<"面积是"<<Area(x,y)<<endl;

}
int Area(int &a,int &b){
    int s;
    s=a*b;
    return s;
}