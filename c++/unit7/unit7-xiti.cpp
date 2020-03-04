/*本函数展示了不带参数、带参数和拷贝构造函数三种情况下输出的值的变化*/
#include <iostream>  //添加输入输出流
using namespace std;  //使用“std”的命名空间
class CTest      //定义一个类，名为CTest
{
private:  int x, y;   //将整数x，y设为私有
public:
    CTest(int p1 = 0, int p2 = 0)  {  x = p1;  y = p2;  }  //定义一个带参数的构造函数，并初始化
    CTest(CTest &p)  {  x = p.x;  y = p.y;  }              //定义一个拷贝构造函数
    void Show( )  {  cout << x << ", " << y << endl;  }    //定义show函数作为输出函数
};
int main( )   //主函数
{
    CTest obj1;        //创建一个名为obj1的CTest类，不带参数默认调用带参数构造函数
    obj1.Show( );      //输出obj1的值0，0
    CTest obj2(2, 5);  //创建一个名为obj2的CTest类，并初始化参数为2，5
    obj2.Show( );      //输出obj2的值2，5
    CTest obj3(obj2);   //创建一个名为obj2的CTest类，并用obj2初始化
    obj3.Show( );       //输出obj3的值2，5
    return 0;           //返回值
}