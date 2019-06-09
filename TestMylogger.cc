
#include "Mylogger.h"
#include <iostream>



void test0()
{
    OHF::Mylogger::getInstance()->error(prefix("error message").c_str());
    OHF::Mylogger::getInstance()->info("info message");
    OHF::Mylogger::getInstance()->warn("warn message");
    OHF::Mylogger::getInstance()->debug("debug message");
    
}

void test1()
{
    LogInfo("info");
    LogWarn("warn");
    LogDebug("debug");
    LogError("error");
}
int main()
{
    //test0();
    test1();
    OHF::Mylogger::destroy();
    return 0;
}

