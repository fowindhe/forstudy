#include <stdio.h>
#include <iostream>

using namespace std;

typedef struct node{
    struct node *LChild;
    struct node *RChild;
    char data;

}BNode,*BTree;

void CreateBTree(BTree &T){
  char c;
  cin>>c;
  if('#'==c)
    T=NULL;
  else{
      T=new BNode;
      T->data=c;
      CreateBTree(T->LChild);
      CreateBTree(T->RChild);
  }
}

void preTree(BTree T){
    if(T){
        cout<<T->data<<"->";
        preTree(T->LChild);
        preTree(T->RChild);
    }
}

void midTree(BTree T){
    if(T){
        midTree(T->LChild);
        cout<<T->data<<"->";
        midTree(T->RChild);
    }
}

void postTree(BTree T){
    if(T){
        postTree(T->LChild);
        postTree(T->RChild);
        cout<<T->data<<"->";
    }

}

int main(int argc, char const *argv[])
{
    BTree T;
    CreateBTree(T);
    cout<<"preTree"<<endl;
    preTree(T);
    cout<<"preTree End"<<endl;
    cout<<"midTree"<<endl;
    midTree(T);
    cout<<"midTree END"<<endl;
    cout<<"postTree"<<endl;
    postTree(T);
    cout<<"postTree END"<<endl;
    return 0;
}
