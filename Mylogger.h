#ifndef __MYLOGGER_H__
#define __MYLOGGER_H__

#include <log4cpp/Appender.hh>
#include <log4cpp/Category.hh>
#include <log4cpp/PatternLayout.hh>
#include <log4cpp/OstreamAppender.hh>

using namespace log4cpp;

namespace OHF{
class Mylogger
{
public:
    static Mylogger * getInstance()
    {
        if(_pInstance == nullptr){
            _pInstance = new Mylogger();
        }
        return _pInstance;
    }

    static void destroy()
    {
        if(_pInstance != nullptr){
            delete _pInstance;
        }
    }

    void error(const char * msg);
    void info(const char * msg );
    void warn(const char * msg);
    void debug(const char * msg);
private:
    Mylogger();
    ~Mylogger();

private:
    static Mylogger * _pInstance; 
    Category &_mylogger; 
};

}

#endif

