#include "shapes.h"

using namespace std;

int main(){
    char alp;
    while(true){
    cout << "shape?" << endl;
    cin >> alp;

    if(alp == 'C'){
        int x, y, rad;
        cin >> x >> y >> rad;
        Circle c;
        c.mk_circle(x,y,rad);
	cout << endl;
    }
    
    else if (alp == 'R'){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        Rectangle r;
        r.mk_rct(a,b,c,d);
	cout << endl;
    }

    else if (alp == 'Q'){
        return 0;
    }
}

return 0;
}
