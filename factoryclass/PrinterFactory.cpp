#include "Printers.h"
enum PrinterType{
    YTD,
    GOT

};
BasePrinter* CreatPrinter(PrinterType type){
    BasePrinter *baseprinter;
    switch(type){
        case YTD:
            baseprinter=new YingTeDaPrinter();
            break;
        case GOT:
            baseprinter=new GotPrinter();
            break;
        default:
            baseprinter=new BlankPrinter();


    }
    return baseprinter;


}


int main(int argc, char const *argv[])
{
    BasePrinter *bp=CreatPrinter(GOT);
    bp->print();
    return 0;
}
