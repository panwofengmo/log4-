
#include "Mylogger.h"
#include <iostream>



void test0()
{
    OHF::Mylogger::getInstance()->error(prefix("error message"));
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

void test2()
{
    LogInfo("cucoucocococo%s,%d","wrong",444);
    LogWarn("sdassdadas %-10s,%.3f","wwwww",3.1415);
}
int main()
{
    //test0();
   // test1();
    test2();
    OHF::Mylogger::destroy();
    return 0;
}

