#include <iostream>
using namespace std;

#define PI 3.1415926
class Circle
{
private:
    /* data */
    double r;//半径
public:
    Circle(/* args */);
    Circle(double a);
    ~Circle();
    double setR(){
        cout<<"请输入半径"<<endl;
        cin>>r;
    };
    double s(){
        return PI*r*r;
    };//计算面积
    double l(){
        return PI*2*r;
    };//计算周长
};

Circle::Circle()
{

}
Circle::Circle(double a)
{
    r=2*a;
}
Circle::Circle(const Circle& c)
{

}
Circle::~Circle()
{
}
