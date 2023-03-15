#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Point {
public:
        double x, y;
        Point(double a=0, double b=0):x(a), y(b) {
                cout << "Point : (" << a << ", " << b << ") is created." << endl;
        }
        Point(Point& c) {
                x = c.x;
                y = c.y;
                cout << "Point : (" << x << ", " << y << ") is copied." << endl;
        }
        ~Point () {
                cout << "Point : (" << x << ", " << y << ") is erased." << endl;
        }
        void show() {
                cout << "Point : (" << x << ", " << y << ")" << endl;
        }
};

class Line {
public:
        Point a, b;
        Line(double aa, double bb, double c, double d):a(aa, bb), b(c, d) {
                cout << "Line : (" << aa << ", " << bb << ") to (" << c << ", " << d << ") is created." << endl;
        }
        void show () {
                cout << "Line : (" << a.x << ", " << a.y << ") to (" << b.x << ", " << b.y << ")" << endl;
        }
        Line(Point& c, Point& d):a(c), b(d) {
                cout << "Line : (" << a.x << ", " << a.y << ") to (" << b.x << ", " << b.y << ") is created." << endl;
        }
        ~Line () {
                cout << "Line : (" << a.x << ", " << a.y << ") to (" << b.x << ", " << b.y << ") is erased." << endl;
        }
};
