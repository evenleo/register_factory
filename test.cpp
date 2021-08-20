#include <iostream>
#include "message1.h"

int main() {
	Message* p = factory::produce("message1");
    p->foo();   //Message1
    
    auto p2 = factory::produce_unique("message1");
    p2->foo();
	
	return 0;
}
