

#ifndef UNTITLED4_OPENDATASERVERCOMMAND_H
#define UNTITLED4_OPENDATASERVERCOMMAND_H


#include "Command.h"
#include "IterCommand.h"
#include <thread>
#include <iostream>

class OpenDataServerCommand: public IterCommand {
    string convertToString();

public:
    OpenDataServerCommand(
            vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>::iterator &iterator);

    virtual void execute() override;


};


#endif //UNTITLED4_OPENDATASERVERCOMMAND_H
