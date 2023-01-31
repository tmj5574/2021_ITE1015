#include "shapes.h"
#include <stdlib.h>

void Circle::mk_circle(int x,int y,int radius){
    cout << "area: " << radius * radius * 3.14 
    << ", perimeter: " << radius * 2 * 3.14 <<endl;
}

void Rectangle::mk_rct(int x_tl, int y_tl, int x_br, int y_br){
    cout << "area: " << abs(x_br - x_tl) * abs(y_tl - y_br)
    << ", perimeter: " << 2*abs(x_br - x_tl) + 2*abs(y_tl - y_br)<<endl;
}
