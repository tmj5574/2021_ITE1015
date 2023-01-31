#include "minesweeper.h"
#include <string>
using namespace std;

vector<string> Minesweeper::set_Map(size_t W, size_t H, vector<string>& map,vector<string>&num) {
    for (int i = 0; i < H; i++) {
        
        for (int j = 0; j < W; j++) {
            int count = 0;
            if (map.at(i).at(j) == '*') {
                cout << '*';
                continue;
            }
            

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
            cout << (char)(count+48);
            num.at(i).at(j) = (char)(count+48);
        }
        cout << endl;
    }
    return num;
}



void Minesweeper::set_underbar(size_t W, size_t H, vector<string>& map2) {
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            map2.push_back("_");
        }
    }
}

void Minesweeper::toggleMine(size_t W, size_t H, size_t lx, size_t ly, vector<string>& map, vector<string>&num) {
    if (map.at(ly).at(lx) == '*') {
        map.at(ly).at(lx) = '0';
        set_Map(W, H, map, num);
    }
    else if (map.at(ly).at(lx) != '*') {
        map.at(ly).at(lx) = '*';
        set_Map(W, H, map, num);
    }
}
