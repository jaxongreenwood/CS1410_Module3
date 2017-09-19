// File: functionsReturn.cpp
// Created by Jaxon Greenwood on 9/14/2017 for CS1410.
// Copyright (c) 2017 WSU
//

#include <iostream>
using namespace std;

/* Task: Define a function that takes one
 * input parameter (integer), it increments the value
 * by one, and it returns the new value to user
 */

// Constants

// Prototypes
int IncrementInt (int i); // an integer
void reallyIncrementValue (int &i); // an address of an integer

// Main Program Program

int main(void) {

    int num;

    cout << "Please enter a number: ";
    cin >> num;

    num = IncrementInt(num);

    cout << "It is now " << num << endl;
    cout << "Address of num: " << &num << endl;

    reallyIncrementValue(num);
    cout << "num is " << num << endl;

    return 0;
}

// Function Definitions
// Passing parameters by value
int IncrementInt (int i){

    cout << "Address of i inside of IncrementInt: "
         << &i << endl;
    i++;
    return i;
}

// increment original integer
// by 1. passing parameter by
// reference. (pass address)
void reallyIncrementValue (int &i){

    cout << "Address of i inside of reallyIncrementValue: "
         << &i << endl;
    i++;

    return;
}