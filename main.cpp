
/* 
 * File:   main.cpp
 * Author: William Rogers
 */

#include "main.h"

int main(int argc, char** argv) {
    //creates a rectangle object with no parameters
    Rectangle myRectangle1;
    //creates a rectangle object with width and height 5x4
    Rectangle myRectangle2(5, 4);

    //creates a box object with no parameters
    Box myBox1;
    //creates a box object with width, height, depth 5x4x6
    Box myBox2(5, 4, 6);

    //examples of passing objects by reference
    displayRectangle(&myRectangle1);
    displayRectangle(&myRectangle2);

    displayBox(&myBox1);
    displayBox(&myBox2);

    return 0;
}