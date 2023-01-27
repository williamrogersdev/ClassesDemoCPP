//
// Created by William Rogers on 1/24/23.
//
/*
 * No Code , No Logic in this file
 * Just what can go in and out
 *
 *
 */

/*
 * File:   rectangle.h
 * Author: Alex Katrompas
 */

#ifndef CLASSES_RECTANGLE_H
#define CLASSES_RECTANGLE_H

#define MIN 0

class Rectangle {

public:
    /*
     * constructors
     * one with no params, one with params (overloading)
     */

    //default constructor that says how to create if nothing gets passed on
    Rectangle();
    //override. An Optional if two are passed in
    Rectangle(int, int);

    //destructor (not used in this example)
    // method that is called automatically when the object goes out of scope. DO not ever call a destructor manually
    ~Rectangle();

    /*
     * Getters
     * Things that return class atributes
     * They never modify anything
     * never create a value inside
     */
    int getWidth();
    int getHeight();
    int getArea();

    /*
     * Setters
     * They modify atributes
     */
    void setWidth(int);
    void setHeight(int);

protected:
    //private variables that define a square
    int width, height;

};

#endif //CLASSES_RECTANGLE_H