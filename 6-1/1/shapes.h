#include <iostream>

using namespace std;

class Circle {
    private:
    int x;
    int y;
    int radius;

    public:
    void mk_circle(int x, int y, int radius);
};

class Rectangle {
    private:
    int x_tl;
    int y_tl;
    int x_br;
    int y_br;

    public:
    void mk_rct(int x_tl, int y_tl, int x_br, int y_br);
};
