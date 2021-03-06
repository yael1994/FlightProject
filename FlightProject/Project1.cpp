
#include "Project1.h"
#include "Lexer.h"
#include "Parser.h"


Project1::Project1(string fileName)  {
    Lexer* lexer = new Lexer();
    this->rawData = lexer->lexer(fileName);
    this->iter = this->rawData.begin();
    delete lexer;
    bulidMap();

}

void Project1::run() {

    Parser* p = new Parser(this->iter,this->getCommandMap(),rawData);
    p->parse();
    delete p;


}




