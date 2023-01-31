#include "minesweeper.h"
#include <iostream>
#include <string>
#include <vector>



using namespace std;
size_t x, y;

int main() {
    string button;
    string map_str;
    int touch = 0;
    size_t lx, ly;
    size_t tx, ty;
    Minesweeper ms;
    vector<string> map;
    vector<string>map2;
    vector<string>num;

    while (true) {


        cin >> button;

        if (button == ":set") {
            cin >> x >> y;

            if (map.size() != 0) {
                map.clear();
                for (int i = 0; i < y; i++) {
                    cin >> map_str;
                    map.push_back(map_str);
                }
                num = map;
                ms.set_Map(x, y, map,num);
            }

            else {
                for (int i = 0; i < y; i++) {
                    cin >> map_str;
                    map.push_back(map_str);

                }
                num = map;
                ms.set_Map(x, y, map,num);
            }
        }
        else if (button == ":play"){
             map2 = map;
             for (int i = 0; i < y; i++) {
                 for (int j = 0; j < x; j++) {
                      map2.at(i).at(j)= '_';
                 }
             }
             for (int i = 0; i < y; i++) {
                 for (int j = 0; j < x; j++) {
                     cout << map2.at(i).at(j);
                 }
                 cout << endl;
             }

        }
        else if (button == ":touch") {
            touch++;
            cin >> tx >> ty;
            if (map.at(ty).at(tx) == '*') {
                printf("DEAD(%d)\n", touch);
                break;
            }
            else {
                for (int i = 0; i < y; i++) {
                    for (int j = 0; j < x; j++) {
                        if (i == tx && j == ty) {
                            cout << num.at(i).at(j);
                            map2.at(i).at(j) = num.at(i).at(j);
                        }
                        else {
                            cout << map2.at(i).at(j);
                        }
                    }
                    cout << endl;
                }
            }

        }

        else if (button == ":toggle") {
            cin >> lx >> ly;
            ms.toggleMine(x, y, lx, ly, map, num);
        }
        else if (button == ":quit") {
            break;
        }
        else {
            continue;
        }

    }return 0;
}
