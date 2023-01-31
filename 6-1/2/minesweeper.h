#pragma once
#ifndef minesweeper_h
#define minesweeper_h

#include <stdio.h>
#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

class Minesweeper
{
public:
    ////////// //////////
    Minesweeper() {
        size_t mWidth = 0;
        size_t mHeight = 0;
    }
    ~Minesweeper() {
        cout << ' ';
    }

    void set_Map(size_t W, size_t H, vector<string>& map);
    void toggleMine(size_t x, size_t y, size_t lx, size_t ly, vector<string>& map);

  /* //return false when input is incorrect
      bool setMap(size_t _width, size_t _height, vector<string>& _map);
     bool toggleMine(int _x, int _y);

       //return map width, height, and char
       size_t width() const;
       size_t height() const;
      char get(int _x, int _y) const; // return ' ' if input is illegal //toggle

        ////////// //////////
       bool setPlay(); // return false when map is not set
       bool touchMap(int _x, int _y); // return true when dead

       // int touchCount() const;

private:
    // add private member variables and functions if it is needed.
    unsigned int mTouchCount;
    size_t mWidth;
    size_t mHeight;
    bool onPlay;
    vector<string> mMap;
    vector<string> playMap;

    void printPlayMap() const; */
};

#endif /* minesweeper_h */

