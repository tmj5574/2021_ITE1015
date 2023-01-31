#include "my_vector.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string button;
    int len;
    string object;
    string object2;
    string oper;

    cin >> button;
    cin >> len;
    cout << "enter a" << endl;
    MyVector a(len);
    cout << "enter b" << endl;
    MyVector b(len);
    MyVector c;

    while(true){
        cin >> button;
        if (button == "c=") {
             cin >> object >> oper >> object2;

                 if (object != object2) {
                     if (atoi(object2.c_str()) !=0) {
                         if (object == "a") {
                             c = a + stoi(object2);
                         }
                         else {
                             c = b + stoi(object2);
                         }
                     }
                     else {
                         c = a + b;
                     }
                 }

                 else if (object == object2) {
                     if (object == "a") {
                         c = a + a;
                     }
                     else {
                         c = b + b;
                     }
                 }
             }

        else if (button == "print") {
            cin >> object;

            if (object == "a") {
                cout << a;
            }
            else if (object == "b") {
                cout << b;
            }
            else if (object == "c") {
                cout << c;
            }
        }

        else if (button == "quit") {
            break;
        }
    }
    return 0;

}
