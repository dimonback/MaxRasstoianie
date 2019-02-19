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

    int i = 0;
    int Ax, Ay, radius;
    Point2 vertex[1];

    Ax = atoi(argv[1]);
    Ay = atoi(argv[2]);
    radius = atoi(argv[3]);
    
    if (argc !=4)
    {
        cout << "Формат ввода: координаты точки радиус окружности \n ";
        return -1;
    }
    
    if ((Ax && Ay) ==0)
    {
        cout << "Искомых точек бесконечное множество \n ";
        return -2;
    }
    
    angle = acos((-Ax)/(sqrt((Ax)*(Ax) + (Ay)*(Ay)) * sqrt(radius*radius)));
    
    if (Ay>0)
        vertex[i] = Point2::Polar(-radius, angle);
    else
        vertex[i] = Point2::Polar(radius, angle);
    
    cout << "Координаты искомой точки окружности " << "(" << vertex[i].getx() << ";" << vertex[i].gety() << ")" << endl;
   
    return 0;
}
