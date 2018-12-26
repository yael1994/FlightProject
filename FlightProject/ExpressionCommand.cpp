
#include "ExpressionCommand.h"

ExpressionCommand::ExpressionCommand(Command *c) : c(c) {
}

double ExpressionCommand::calculate() {
    c->execute();
    return 0;
}
