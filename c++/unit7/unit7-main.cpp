#include <iostream>
//#include "unit7-class.h"
using namespace std;

#define PI 3.1415926
class Circle
{
private:
    /* data */
    double r;//�뾶
public:
    Circle(/* args */);
    Circle(double a);
    Circle(const Circle& c);
    ~Circle();
    void setR(double x) {
        //cout << "������뾶" << endl;
        r=x;//���ð뾶
        
    };
    double s() {
        return PI * r * r;
    };//�������
    double l() {
        return PI * 2 * r;
    };//计算周长
    
};

Circle::Circle()
{

}
Circle::Circle(double a)
{
    r = 2 * a;
}
Circle::Circle(const Circle& c)
{
    r=c.r;

}
Circle::~Circle()
{
}
int main(){
    Circle c1;
    cout << "请输入半径" << endl;
    int x;
    cin>>x;
        c1.setR(x);
        cout<<c1.s()<<endl;
        cout<<c1.l()<<endl;
    
    Circle c2(x);
    //c2.setR();
    cout<<c2.s()<<endl;
    cout<<c2.l()<<endl;

    Circle c3(c1);
    cout<<c3.s()<<endl;
    cout<<c3.l()<<endl;
}