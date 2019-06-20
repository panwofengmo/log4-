这只是一个封装好的log4cpp的类

已改进功能，能直接使用(支持多参数)
     LogInfo("info",...);
     LogWarn("warn",...);
     LogDebug("debug",...);
     LogError("error",...);
只有这四个功能，Log4cpp采用cout输出和输出到logfile.log这两种方式



编译 ：g++ *.c -llog4cpp -lpthread
