#include <stdio.h>
#include <iostream>
using namespace std;
class A{
public:
    int a;
    A(){
        a=1;
        cout<<"ainit"<<endl;
        
    }
    int print(A a){
        cout<<"AAAAAprint="<<a.a<<endl;
        return a.a;
    }
    ~A(){
        cout<<"~A"<<endl;
    }
protected:
    int b;

};

class B:public A{
public:
    int c;
    B(){
        b=5;
        cout<<"Binit"<<endl;
    }
     virtual int print(){
        cout<<"B:print"<<b<<endl;
        return b;
    }
    ~B(){
        cout<<"~B"<<endl;
    }
};
void funct(int par1){
    if(true)
        int par1=5;
}
template <class D>
D func1(D d);
//typedef char charC;
template <class charC>
//charC func2(charC c,charC d);
char * func2(charC c,charC d){
    char a[3];
    a[0]=c;
    a[1]=d;
    a[2]='\0';
    cout<<a<<endl;
    char *f=a;
    cout<<f<<endl;
    return f;

}
int main(int argc, char const *argv[])
{
    
    char c1='a';
    char c2='b';
    char *c3=func2(c1,c2);
    cout<<c3<<endl;
    printf("hello\n");
    A *a=new B;
    B *b=new B;
    B c;

    a=&c; 
    c.print();
    a->a=3;
    a->print(*a);
    b->print();
    c.~B();
  //  delete a;
    delete b;
    return 0;
}
