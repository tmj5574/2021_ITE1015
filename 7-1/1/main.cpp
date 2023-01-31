#include <iostream>
#include <string>
#include <sstream>
#include "sorted.h"

using namespace std;


int main()
{
    SortedArray sa;
    vector<int> v;
    string button = "";
    int put = 0;

    while (1) {
        getline(cin, button);

        if (button == "ascend") {
            v = sa.GetSortedAscending();
            for (int i = 0; i < (int)v.size(); i++) {
                cout << v[i] << ' ';
            }cout << endl;
        }

        else if (button == "descend") {
            v = sa.GetSortedDescending();
            for (int i = 0; i < (int)v.size(); i++) {
                cout << v[i] << ' ';
            }cout << endl;
        }

        else if (button == "max") {
            cout << sa.GetMax() << endl;
        }

        else if (button == "min") {
            cout << sa.GetMin() << endl;
        }

        else if (button == "quit") {
            break;
        }

        else {
            istringstream ss(button);
            while (getline(ss, button, ' ')) {
                sa.AddNumber(stoi(button));
            }

        }

    }

        return 0;
    }


