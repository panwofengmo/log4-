#ifndef __MYLOGGER_H__
#define __MYLOGGER_H__

#include <log4cpp/Appender.hh>
#include <log4cpp/Category.hh>
#include <log4cpp/PatternLayout.hh>
#include <log4cpp/OstreamAppender.hh>
#include <string>
using namespace log4cpp;
using std::string;

#define prefix(msg) (string(" [").append(__FILE__)\
                    .append(":").append(__FUNCTION__)\
                    .append(":").append(std::to_string(__LINE__))\
                    .append("] ").append(msg).c_str())

#define LogError(msg,...) (OHF::Mylogger::getInstance()->error(prefix(msg),##__VA_ARGS__))
#define LogInfo(msg,...) (OHF::Mylogger::getInstance()->info(prefix(msg),##__VA_ARGS__))
#define LogWarn(msg,...) (OHF::Mylogger::getInstance()->warn(prefix(msg),##__VA_ARGS__))
#define LogDebug(msg,...) (OHF::Mylogger::getInstance()->debug(prefix(msg),##__VA_ARGS__))


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


    void error(const char* msg);
    void info(const char* msg);
    void warn(const char* msg);
    void debug(const char* msg);

    template<typename... Args>
        void error(Args... args)
        {
            _mylogger.error(args...);
        }
    template<typename... Args>
        void info(Args... args)
        {
            _mylogger.info(args...);
        }
    template<typename... Args>
        void warn(Args... args)
        {
            _mylogger.warn(args...);
        }
    template<typename... Args>
        void debug(Args... args)
        {
            _mylogger.debug(args...);
        }
private:
    Mylogger();
    ~Mylogger();

private:
    static Mylogger * _pInstance; 
    Category &_mylogger; 
};

}

#endif

