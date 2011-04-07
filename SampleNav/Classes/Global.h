#ifdef DEBUG
#  define LOG(...) NSLog(__VA_ARGS__)
#  define LOG_METHOD NSLog(@"%s", __func__)
#else
#  define LOG(...) ;
#  define LOG_METHOD ;
#endif
