#include "minesweeper.h"
#include <sstream>

void Minesweeper::set_Map(size_t W, size_t H, vector<string>& map) {
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (map.at(i).at(j) == '*') {
                cout << '*';
                continue;
            }
            int count = 0;

            if (i - 1 >= 0) {
                if (j - 1 >= 0) {
                    if (map.at(i - 1).at(j - 1) == '*') {
                        count++;
                    }
                }
                if (map.at(i - 1).at(j) == '*') {
                    count++;
                }

                if (j + 1 < W) {
                    if (map.at(i - 1).at(j + 1) == '*') {
                        count++;
                    }
                }
            }

            if (j - 1 >= 0) {
                if (map.at(i).at(j - 1) == '*') {
                    count++;
                }
            }

            if (j + 1 < W) {
                if (map.at(i).at(j + 1) == '*') {
                    count++;
                }
            }

            if (i + 1 < H) {
                if (j - 1 >= 0) {
                    if (map.at(i + 1).at(j - 1) == '*') {
                        count++;
                    }
                }
                if (map.at(i + 1).at(j) == '*') {
                    count++;
                }

                if (j + 1 < W) {
                    if (map.at(i + 1).at(j + 1) == '*') {
                        count++;
                    }
                }
            }

            cout << count;
        }
        cout << endl;
    }
}

void Minesweeper::toggleMine(size_t W, size_t H, size_t lx, size_t ly, vector<string>& map) {
    if (map.at(ly).at(lx) == '*') {
        map.at(ly).at(lx) = '0';
        set_Map(W, H, map);
    }
    else if (map.at(ly).at(lx) != '*') {
        map.at(ly).at(lx) = '*';
        set_Map(W, H, map);
    }
}
