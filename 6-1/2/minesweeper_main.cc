#include "minesweeper.h"
#include <iostream>
#include <string> //나중에 없애기
#include <vector>

using namespace std;
size_t x, y;

    int main() {
        string button;
        string map_str;
        size_t lx, ly;
        Minesweeper ms;
        vector<string> map;

        while (true) {

          
            cin >> button;

            if (button == ":set") {
                cin >> x >> y;

                if(map.size() != 0) {
                    map.clear();
                    for (int i = 0; i < y; i++) {
                        cin >> map_str;
                        map.push_back(map_str);}

                    ms.set_Map(x, y, map);
                }

                else{
                    for (int i = 0; i < y; i++) {
                        cin >> map_str;
                        map.push_back(map_str);

                    }
                    ms.set_Map(x, y, map);
                } }

            else if (button == ":toggle") {
                 cin >> lx >> ly;
                 ms.toggleMine(x,y,lx, ly, map);
            }
            else if (button == ":quit") {
                break;
            }
            else {
                continue;
            }

        }
        return 0;
    }

