#ifndef __MYLOGGER_H__
#define __MYLOGGER_H__

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

private:
    Mylogger();
    ~Mylogger();

private:
    static Mylogger * _pInstance; 

};
Mylogger * Mylogger::_pInstance = nullptr; 

}

#endif

