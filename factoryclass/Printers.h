#include <stdio.h>
#include <iostream>
using namespace std;
class BasePrinter{
    public:
        BasePrinter(){
            cout<<"build Base"<<endl;
        }
        virtual void print(){
            cout<<"base print"<<endl;
        }

};

class YingTeDaPrinter:public BasePrinter{
    public:
        YingTeDaPrinter(){
                        cout<<"build ytd"<<endl;

        }
        void print(){
            cout<<"ytd print"<<endl;
        }
    
};

class GotPrinter:public BasePrinter{
    public:
        GotPrinter(){
            cout<<"build got"<<endl;

        }
        void print(){
            cout<<"got print"<<endl;
        }

};
class BlankPrinter:public BasePrinter{
    public:
        BlankPrinter(){
                        cout<<"build blank"<<endl;

        }
};
