//
// Created by William Rogers on 1/24/23.
//
/*
 *
 *
 *
 *
 */

/*
 * File:   rectangle.cpp
 * Author: Alex Katrompas
 */

#include "rectangle.h"

Rectangle::Rectangle() {
    //use your own setters!
    //these are the defualt if it has no values passed in
    setWidth(MIN);
    setHeight(MIN);
}

Rectangle::Rectangle(int w, int h) {
    //use your own setters!
    //allows us to pass in args
    setWidth(w);
    setHeight(h);
}


//destructor

Rectangle::~Rectangle() {
}


//getter
//do not modify anything
//never
int Rectangle::getWidth() {
    return width;
}

//getter
//do not modify anything

int Rectangle::getHeight() {
    return height;
}

//getter
//do not modify anything


int Rectangle::getArea() {
    return width * height;
}

/*
setters
checking info coming
every single time we do input
must follow with validation
input, validation, proccsing, output

 input
    int h

 validation - make sure height in possitive
    if (h > MIN)

processing

 output


 this
 -means the next thing you see is a class atribute
 - when you want to differntiate between a local varaible and class attribute with the same names


*/
void Rectangle::setHeight(int h) {
    //setters are where you keep your protections for attributes
    if (h > MIN) {
        height = h;
    } else {
        height = MIN;
    }
}

void Rectangle::setWidth(int w) {
    //setters are where you keep your protections for attributes
    if (w > MIN) {
        width = w;
    } else {
        width = MIN;
    }
}