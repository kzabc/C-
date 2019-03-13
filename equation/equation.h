//
// Created by zkay on 2019-03-07.
//

#ifndef EQUATION_EQUATION_H
#define EQUATION_EQUATION_H

#include <cmath>
#include <iostream>
using namespace std;
class FindRoot {
private:
    float a,b,c,d;
    double x1,x2;
public:
    FindRoot();
    FindRoot(float, float, float);
    ~FindRoot();
    void Display();
    void Find();
};


#endif //EQUATION_EQUATION_H
