cmake_minimum_required(VERSION 3.12)
project(FlightProject)

#set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-std=c++14 -pthread")
include_directories(.)

add_executable(FlightProject
        BinaryExpression.cpp
        BinaryExpression.h
        SendMesagge.cpp
        SendMesagge.h
        Command.h
        ConditionParser.cpp
        ConditionParser.h
        ConnectCommand.cpp
        ConnectCommand.h
        CreateExp.cpp
        CreateExp.h
        DataReaderServer.cpp
        DataReaderServer.h
        DefineVarCommand.cpp
        DefineVarCommand.h
        Div.cpp
        Div.h
        Expression.h
        ExpressionCommand.h
        ExpressionSingleTone.h
        IfCommand.cpp
        IfCommand.h
        IterCommand.h
        Lexer.cpp
        Lexer.h
        LoopCommand.cpp
        LoopCommand.h
        main.cpp
        Minus.cpp
        Minus.h
        Mul.cpp
        Mul.h
        NameToPathTable.h
        Neg.cpp
        Neg.h
        Number.cpp
        Number.h
        OpenDataServerCommand.cpp
        OpenDataServerCommand.h
        Parser.cpp
        Parser.h
        Plus.cpp
        Plus.h
        PrintCommand.cpp
        PrintCommand.h
        Project1.cpp
        Project1.h
        setCommand.cpp
        setCommand.h
        ShAlgo.cpp
        ShAlgo.h
        SymbolTable.h
        SymbolTable.cpp
        Utils.cpp
        Utils.h SleepCommand.cpp SleepCommand.h)
