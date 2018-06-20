#include <stdio.h>
#include "singleton.h"
#include <iostream>
using namespace std;
Singleton *Singleton::instance=0;
Singleton* Singleton::getInstance(){
    if(instance==NULL)
        instance=new Singleton();
    return instance;
}
int main(int argc, char const *argv[])
{
    Singleton *sl1;
    Singleton *sl2;
    sl1=Singleton::getInstance();
    sl2=Singleton::getInstance();
    if(sl1==sl2){
        cout<<"we are the one"<<sl1<<endl;
    }
    else cout<<"we are diff"<<sl1<<sl2<<endl;
    return 0;
}
