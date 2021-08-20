#ifndef MESSAGE1_H_
#define MESSAGE1_H_

#include "message.h"
#include "factory.h"
#include <iostream>

class Message1 : public Message {
public:
    virtual ~Message1() {}
    virtual void foo() {
        std::cout << "message1 foo()" << std::endl;
    }
};

REGISTER_MESSAGE(Message1, "message1");

#endif