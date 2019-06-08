//
//  binaryoperation.cpp
//  Testing2
//
//  Created by AnthonyFPP on 31/05/2019.
//  Copyright © 2019 AnthonyFPP. All rights reserved.
//

#include <stdio.h>
#include "binaryoperation.h"

BinaryOperation::BinaryOperation(char operation,
                                 Expression *lhs,
                                 Expression *rhs)
                                : op(operation),
                                  lhs(lhs),
                                  rhs(rhs) {}

double BinaryOperation::eval(EvalState & state){
    return 1;
}


void BinaryOperation::setLHS(Expression* e) { lhs = e;}
void BinaryOperation::setRHS(Expression* e) { rhs = e;}



expressionType BinaryOperation::getType() { return kBinaryOperation; }
