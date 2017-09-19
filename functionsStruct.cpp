
// File: functionsStruct
// Created by Jaxon Greenwood on 9/14/2017 for CS1410.
// Copyright (c) 2017 WSU
//

#include <iostream>
using namespace std;

// Task: Create a function that displays the x and the y coordinates
// Constants & Structure
struct Point {
    float x, y;
};

// Prototypes
// the prototypes must be defined AFTER the struct
int disPoint (struct Point p);

// Main Program Program

int main(void) {

    Point first = {2, 8};
    first = disPoint(first);

    return 0;
}

// Function Definitions
int disPoint (struct Point &p) {

    cout << "Point x = " << p.x << endl;
    cout << "Point y = " << p.y << endl;
    p.x += 5;
    p.y += 6;

    return p.x, p.y;
}