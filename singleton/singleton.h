#ifndef SINGLETON_H
#define SINGLETON_H
class Singleton{
    protected:
        Singleton(){
            
        }
        ~Singleton();
        static Singleton *instance;
    public:
        static Singleton *getInstance();
};








#endif