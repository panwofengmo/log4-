
#include "Mylogger.h"
#include <iostream>


void test0()
{
    OHF::Mylogger::getInstance()->error("error message");
    OHF::Mylogger::getInstance()->info("info message");
    OHF::Mylogger::getInstance()->warn("warn message");
    OHF::Mylogger::getInstance()->debug("debug message");
    
}
int main()
{
    test0();
    
    OHF::Mylogger::destroy();
    return 0;
}

