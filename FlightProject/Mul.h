
#ifndef FLIGHTPROJECT_MUL_H
#define FLIGHTPROJECT_MUL_H


#include "BinaryExpression.h"

class Mul: public BinaryExpression {
public:
    Mul(Expression* left,Expression* right):BinaryExpression(left,right){};
    virtual double calculate();
    ~Mul()= default;
};


#endif //FLIGHTPROJECT_MUL_H
