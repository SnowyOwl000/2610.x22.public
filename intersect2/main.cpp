#include <iostream>

using namespace std;

struct Point {
    double
        x,y;

    explicit Point(double _x=0,double _y=0) {
        x = _x;
        y = _y;
    }
    Point operator+(Point p) const {
        return Point(x+p.x,y+p.y);
    }
    Point operator-(Point p) const {
        return Point(x-p.x,y-p.y);
    }
    Point operator*(double s) const {
        return Point(x * s,y * s);
    }
    double operator*(Point p) const {
        return x * p.y - y * p.x;
    }
    Point &operator=(Point p) {
        x = p.x;
        y = p.y;
        return *this;
    }
};

int main() {
    Point
        p,p1,
        q,q1,
        r,s,
        d,
        ip;
    double
        t,u,
        v;

    // step 1: read p and p'
    cout << "Enter p: ";
    cin >> p.x >> p.y;
    cout << "Enter p': ";
    cin >> p1.x >> p1.y;

    cout << "Enter q: ";
    cin >> q.x >> q.y;
    cout << "Enter q': ";
    cin >> q1.x >> q1.y;

    // calculate r and s
    r = p1 - p;
    s = q1 - q;

    // calculate q - p
    d = q - p;

    // calculate v = r x s
    v = r * s;

    if (v == 0) {
        if (d * r == 0)
            cout << "Collinear" << endl;
        else
            cout << "Parallel" << endl;
    } else {
        t = (d * r) / v;
        u = (d * s) / v;

        if (t >= 0 && t <= 1 && u >= 0 && u <= 1) {
            ip = p + r * t;
            cout << "Intersect at " << ip.x << ' ' << ip.y << endl;
        } else
            cout << "No intersect" << endl;
    }
    return 0;
}
