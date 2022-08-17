#include <iostream>

using namespace std;

int main() {
    double
        px,py,
        p1x,p1y,
        qx,qy,
        q1x,q1y,
        rx,ry,
        sx,sy,
        t,u,
        dx,dy,      // q-p
        ipx,ipy,    // intersection point of segments
        v;

    // read endpoints of line segments
    cout << "Enter p: ";
    cin >> px >> py;
    cout << "Enter p': ";
    cin >> p1x >> p1y;

    cout << "Enter q: ";
    cin >> qx >> qy;
    cout << "Enter q': ";
    cin >> q1x >> q1y;

    // calculate r = p' - p
    rx = p1x - px;
    ry = p1y - py;

    // calculate s = q' - q
    sx = q1x - qx;
    sy = q1y - qy;

    // calculate d = q - p
    dx = qx - px;
    dy = qy - py;

    // calculate v = r x s
    v = rx * sy - ry * sx;

    // if v == 0, then segments are parallel
    if (v == 0) {
        // if d x r is also 0, then segments are collinear
        if (dx * ry - dy * rx == 0)
            cout << "Segments are collinear" << endl;
        else
            cout << "Segments are parallel" << endl;

    } else {
        // calculate t = d x r / v
        t = (dx * ry - dy * rx) / v;

        // calculate u = d x s / v
        u = (dx * sy - dy * sx) / v;

        if (t >= 0 && t <= 1 && u >= 0 && u <= 1) {
            cout << "Intersection point: ";
            ipx = px + rx * t;
            ipy = py + ry * t;
            cout << ipx << ' ' << ipy << endl;
        } else
            cout << "Segments do not intersect" << endl;
    }

    return 0;
}
