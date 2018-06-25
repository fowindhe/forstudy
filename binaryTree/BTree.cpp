#include <stdio.h>
#include <iostream>
using namespace std;
typedef struct Node{
    char data;
    Node *LChild;
    Node *RChild;

} BNode,*BTree;

void CreatBTree(BTree &btree){
    char c;
    cin>>c;
    if(c=='#')
        btree=NULL;
    else{
        btree=new BNode();
        btree->data=c;
        CreatBTree(btree->LChild);
        CreatBTree(btree->RChild);
    }
}

void prePTree(BTree btree){
        if(btree==NULL)
        return;
    cout<<btree->data<<endl;
    prePTree(btree->LChild);
    prePTree(btree->RChild);
}

void midPTree(BTree btree){
        if(btree==NULL)
        return;
    
    midPTree(btree->LChild);
    cout<<btree->data<<endl;
    midPTree(btree->RChild);

}

void lastPTree(BTree btree){
    if(btree==NULL)
        return;
    lastPTree(btree->LChild);
    lastPTree(btree->RChild);
    cout<<btree->data<<endl;
}

int main(int argc, char const *argv[])
{
    BTree btree;
    CreatBTree(btree);
    prePTree(btree);
    return 0;
}
