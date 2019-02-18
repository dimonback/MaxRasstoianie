#include <iostream>
#include <math.h>
using namespace std;

class Point2
{
private:
    float x;
    float y;
    Point2(float _x, float _y) : x(_x), y(_y) {}
public:
    float getx() { return x; }
    float gety() { return y; }
    static Point2 Polar(float, float);
    Point2() { x=y=0.0; }
};

inline Point2 Point2::Polar(float R, float F)
{
    return Point2(R*cos(F), R*sin(F));
}

int main(int argc, char *argv[])
{
    float angle = 0.0;

    float radius;
    int i = 0;
    int Ax, Ay;
    Point2 vertex[2];
    cin >> Ax;
    cin >> Ay;
    cin >> radius;

    //Ax = atoi(argv[1]);
    //Ay = atoi(argv[2]);
    //radius = atoi(argv[3]);
    angle = acos((-Ax)/(sqrt((Ax)*(Ax) + (Ay)*(Ay)) * sqrt(radius*radius)));
    
    
    vertex[i] = Point2::Polar(radius, angle);
    cout << "(" << vertex[i].getx() << ";" << vertex[i].gety() << ")" << endl;
   
    
    return 0;
}
