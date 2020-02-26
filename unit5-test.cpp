#include <iostream>
using namespace std;

void swap(int &a,int &b){  //“&”即引用传递，是x和y的别名，内存不会分配空间，真实交换了数据
    int t;                 //不加&，是值传递，是一种单向传递，被调用函数无法返回结果
    t=a;
    a=b;
    b=t;
}
int main(){
    int x=5,y=10;
    cout<<"输出x和y："<<x<<","<<y<<endl;
    
    swap(x,y);
    cout<<x<<","<<y<<endl;
    return 0;
}